/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLAgent.h>

@interface PLARKitAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)log;
- (void)initOperatorDependancies;

@end
