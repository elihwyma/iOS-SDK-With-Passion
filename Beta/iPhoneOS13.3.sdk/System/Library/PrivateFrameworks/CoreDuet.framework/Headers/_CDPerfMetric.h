/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, _CDPerfMetricFamily;

@interface _CDPerfMetric : NSObject

{
    struct os_unfair_lock_s _lock;
    unsigned long long _count;
    double _lastElapsedTime;
    double _minimumElapsedTime;
    double _maximumElapsedTime;
    double _totalElapsedTime;
    double _lastUpdateTime;
    unsigned long long _lastResultCount;
    unsigned long long _errorCount;
    NSString *_name;
    NSString *_string;
    _CDPerfMetricFamily *_family;
}

@property (weak, readonly) _CDPerfMetricFamily *family;
@property (readonly) NSString *name;
@property (readonly) NSString *string;
@property (readonly) unsigned long long count;
@property (readonly) NSDate *lastUpdate;
@property (readonly) double lastElapsedTime;
@property (readonly) double totalElapsedTime;
@property (readonly) double minimumElapsedTime;
@property (readonly) double maximumElapsedTime;
@property (readonly) double averageElapsedTime;
@property (readonly) unsigned long long lastResultCount;
@property (readonly) unsigned long long errorCount;

+ (id)perfMetricForFetchRequest:(id)arg1 type:(id)arg2;

- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;

@end
