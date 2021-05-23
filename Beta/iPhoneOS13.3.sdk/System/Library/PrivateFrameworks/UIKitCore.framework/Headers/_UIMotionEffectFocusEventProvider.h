/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIMotionEffectEventProvider.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider

{
    _Bool _isGeneratingEvents;
    struct CGPoint _focusPosition;
    struct CGPoint _lastReportedPosition;
}

@property (nonatomic) struct CGPoint focusPosition;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (id)currentEvent;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (_Bool)wantsSynchronizedUpdates;

@end
