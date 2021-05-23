/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface _GEOMapItemHandleCacheData : NSObject

{
    NSDate *_timestamp;
    NSData *_data;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long cost;

- (id)initWithTimestamp:(id)arg1 data:(id)arg2;

@end
