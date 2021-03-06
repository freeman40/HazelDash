#pragma once

#include "Hazel/Scene/NativeScript.h"

class Enemy : public Hazel::NativeScript {
public:

	Enemy(Hazel::Entity entity, float fixedTimeStep);
	virtual void OnUpdate(Hazel::Timestep ts) override;

private:
	float m_FixedUpdateAccumulatedTs = 0.0f;
	float m_FixedTimestep = 1.0f / 10.0f;
};
