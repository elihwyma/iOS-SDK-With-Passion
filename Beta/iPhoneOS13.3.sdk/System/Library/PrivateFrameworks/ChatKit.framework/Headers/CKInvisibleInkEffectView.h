/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKInvisibleInkEffectCoverageTracker, NSString, UIImage;

@protocol CKInvisibleInkEffectViewDelegate;

@interface CKInvisibleInkEffectView : UIView

{
    _Bool _suspended;
    _Bool _paused;
    id <CKInvisibleInkEffectViewDelegate> _delegate;
    UIImage *_image;
    CKInvisibleInkEffectCoverageTracker *_coverageTracker;
}

@property (retain, nonatomic) CKInvisibleInkEffectCoverageTracker *coverageTracker;
@property (weak, nonatomic) id <CKInvisibleInkEffectViewDelegate> delegate;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (double)updateInterval;

- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)invisibleInkEffectCoverageTrackerDidUncover:(id)arg1;

@end
