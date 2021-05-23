/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITapGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIDismissCurlUpTapGestureRecognizer : UITapGestureRecognizer

{
    float _curlUpDY;
}

@property (nonatomic, setter=_setCurlUpDY:) float _curlUpDY;

- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;

@end
