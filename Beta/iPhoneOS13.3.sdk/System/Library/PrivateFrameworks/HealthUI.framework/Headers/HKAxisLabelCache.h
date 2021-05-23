/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSCache, NSNumber;

@protocol HKAxisLabelDataSource;

@interface HKAxisLabelCache : NSObject

{
    id <HKAxisLabelDataSource> _axisLabelDataSource;
    NSNumber *_axisLabelMaximumWidth;
    NSCache *_mainCache;
}

@property (retain, nonatomic) NSCache *mainCache;
@property (weak, nonatomic) id <HKAxisLabelDataSource> axisLabelDataSource;
@property (nonatomic, readonly) NSNumber *axisLabelMaximumWidth;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (void)_handleTimeChangeNotification:(id)arg1;
- (id)allAxisLabelsForRange:(id)arg1 isHorizontal:(_Bool)arg2 zoomScale:(double)arg3 timeScope:(long long)arg4;
- (void)enumerateAxisLabelsForTextInRange:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7 gridlineWidth:(double)arg8 timeScope:(long long)arg9 usingBlock:(CDUnknownBlockType)arg10;

@end
