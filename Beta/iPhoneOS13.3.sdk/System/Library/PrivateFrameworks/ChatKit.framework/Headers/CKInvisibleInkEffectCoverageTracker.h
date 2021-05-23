/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol CKInvisibleInkEffectCoverageTrackerDelegate;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkEffectCoverageTracker : NSObject

{
    double *_expiryTimes;
    unsigned long long _width;
    unsigned long long _height;
    double _cellWidth;
    double _cellHeight;
    _Bool _uncovered;
    NSTimer *_recoverTimer;
    id <CKInvisibleInkEffectCoverageTrackerDelegate> _delegate;
    double _touchLifetime;
    struct CGSize _size;
}

@property (weak, nonatomic) id <CKInvisibleInkEffectCoverageTrackerDelegate> delegate;
@property (nonatomic) struct CGSize size;
@property (nonatomic, readonly) double touchLifetime;

- (void)dealloc;
- (void)reset;
- (void)recordTouchAtPoint:(struct CGPoint)arg1;
- (void)_checkForCover:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 touchLifetime:(double)arg2;

@end
