/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject

{
    CLSPublicEventCache *_cache;
    double _queryRadius;
}

@property (nonatomic, readonly) CLSPublicEventCache *cache;
@property (nonatomic) double queryRadius;

+ (id)urlForEventsForCacheInvalidation;

- (id)init;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)saveEventsForCacheInvalidation:(id)arg1;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;

@end
