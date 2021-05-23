/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSString, UIInteractionProgress;

@interface CSLocketForcePressGestureRecognizer : UILongPressGestureRecognizer

{
    UIInteractionProgress *_interactionProgress;
    _Bool _forceTouchCompleted;
}

@property (nonatomic) _Bool forceTouchCompleted;
@property (nonatomic, readonly) double percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;

@end
