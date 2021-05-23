/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIGestureRecognizer.h>

@interface ADTapGestureRecognizer : UIGestureRecognizer

{
    long long _finalTrackingID;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchMovedHandler;
    CDUnknownBlockType _touchUpHandler;
}

@property (nonatomic) long long finalTrackingID;
@property (copy, nonatomic) CDUnknownBlockType touchDownHandler;
@property (copy, nonatomic) CDUnknownBlockType touchMovedHandler;
@property (copy, nonatomic) CDUnknownBlockType touchUpHandler;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
