#pragma once
class Text : public Unit
{
public:
	Text();
	~Text();

	std::string str;

	void Draw() override;
};