/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, _CDSizeMetricFamily;

@interface _CDSizeMetric : NSObject

{
    struct os_unfair_lock_s _lock;
    unsigned long long _scale;
    unsigned long long _count;
    unsigned long long _firstSize;
    unsigned long long _lastSize;
    unsigned long long _minimumSize;
    unsigned long long _maximumSize;
    unsigned long long _totalSizes;
    NSDate *_firstUpdate;
    NSDate *_lastUpdate;
    NSString *_name;
    NSString *_string;
    _CDSizeMetricFamily *_family;
}

@property (weak, readonly) _CDSizeMetricFamily *family;
@property (readonly) NSString *name;
@property (readonly) NSString *string;
@property (readonly) unsigned long long count;
@property (readonly) NSDate *firstUpdate;
@property (readonly) unsigned long long firstSize;
@property (readonly) NSDate *lastUpdate;
@property (readonly) unsigned long long lastSize;
@property (readonly) unsigned long long minimumSize;
@property (readonly) unsigned long long maximumSize;
@property (readonly) double averageSize;

- (id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4;

@end
