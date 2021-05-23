/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class PLService, PLXPCListenerOperatorComposition;

@interface PLDuetServiceLpmSource : NSObject

{
    PLService *_duetService;
    PLXPCListenerOperatorComposition *_lpmEnabledXPCListener;
    PLXPCListenerOperatorComposition *_lpmDisabledXPCListener;
}

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *lpmEnabledXPCListener;
@property (retain) PLXPCListenerOperatorComposition *lpmDisabledXPCListener;

+ (id)entryEventForwardDefinitionLpmSourceInformation;

- (id)init;
- (void)stopService;
- (void)didReceiveLpmSourceInfoWithPayload:(id)arg1 withFlag:(short)arg2;
- (void)initOperatorDependanciesLpmSource:(id)arg1;

@end
