/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBAnalyticsDispatcher : NSObject

+ (void)globeKeyEducationShown:(double)arg1;
+ (id)currentInputMode;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;
+ (id)preferredEventName:(id)arg1;
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;
+ (id)allowedValuesForType:(id)arg1;
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;
+ (void)globeKeyLongPress;
+ (void)handwritingResized:(id)arg1;

@end
