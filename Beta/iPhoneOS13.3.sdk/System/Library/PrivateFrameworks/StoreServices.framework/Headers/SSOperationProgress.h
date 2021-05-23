/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject

{
    _Bool _canPause;
    double _changeRate;
    long long _currentValue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    long long _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    long long _units;
}

@property _Bool canPause;
@property long long operationType;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property long long units;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)snapshot;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_updateStatisticsFromSnapshots;
- (void)resetSnapshots;

@end
