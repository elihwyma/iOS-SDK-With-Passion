/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

#import <HealthUI/Swift-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface HKOutsideViewTapDetector : NSObject <Swift>

{
    UITapGestureRecognizer *_recognizer;
    UIView *_view;
    CDUnknownBlockType _outsideTapBlock;
}

@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) CDUnknownBlockType outsideTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (id)initWithView:(id)arg1 outsideTapBlock:(CDUnknownBlockType)arg2;

@end
