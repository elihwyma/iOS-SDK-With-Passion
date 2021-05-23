/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewTrackedValue : NSObject

{
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
    _Bool _isAccumulating;
    double _trackedValue;
}

@property (nonatomic) double trackedValue;
@property (nonatomic) _Bool isAccumulating;

- (id)init;
- (void)addValue:(double)arg1;
- (double)speed;

@end
