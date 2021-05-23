/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFGetTravelTimeAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)arg1;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (void)getMapItemFromCollection:(id)arg1 parameterKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
