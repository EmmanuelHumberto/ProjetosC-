.PHONY: clean All

All:
	@echo "----------Building project:[ jogo - Debug ]----------"
	@cd "jogo" && "$(MAKE)" -f  "jogo.mk"
clean:
	@echo "----------Cleaning project:[ jogo - Debug ]----------"
	@cd "jogo" && "$(MAKE)" -f  "jogo.mk" clean
