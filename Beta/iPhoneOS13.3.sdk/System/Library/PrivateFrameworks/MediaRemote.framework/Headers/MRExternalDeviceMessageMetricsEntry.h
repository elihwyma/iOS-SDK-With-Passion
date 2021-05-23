/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceMessageMetricsEntry : NSObject

{
    unsigned long long _avg;
    unsigned long long _min;
    unsigned long long _max;
    unsigned long long _total;
    NSMutableArray *_values;
}

@property (nonatomic) unsigned long long avg;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long total;
@property (retain, nonatomic) NSMutableArray *values;

- (id)init;
- (id)description;
- (void)updateWithValue:(unsigned long long)arg1;

@end
