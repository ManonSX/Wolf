#ifndef WOLFAPP_H
#define WOLFAPP_H

#include "MooseApp.h"

class WolfApp;

template<>
InputParameters validParams<WolfApp>();

class WolfApp : public MooseApp
{
public:
  WolfApp(InputParameters parameters);
  virtual ~WolfApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* WOLFAPP_H */
