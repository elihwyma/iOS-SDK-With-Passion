/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIView.h>

@class NSString, OKPresentationViewAllGestureRecognizer;

@interface OKPresentationViewProxy : OFUIView

{
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)presentationViewController;
- (void)handleAllGesture:(id)arg1;

@end
