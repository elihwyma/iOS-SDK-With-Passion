/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject

{
    struct {
        _Bool shouldRecognizeSwipeDownGestureRecognizer;
    } _delegateRespondsTo;
    _Bool _allowSwipeUp;
    _Bool _allowSwipeDown;
    id <PXVerticalSwipeGestureRecognizerHelperDelegate> _delegate;
    NSMapTable *_dependentScrollViews;
}

@property (nonatomic, readonly) NSMapTable *dependentScrollViews;
@property (weak, nonatomic) id <PXVerticalSwipeGestureRecognizerHelperDelegate> delegate;
@property (nonatomic) _Bool allowSwipeUp;
@property (nonatomic) _Bool allowSwipeDown;

- (id)init;
- (_Bool)verticalSwipeGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1;

@end
