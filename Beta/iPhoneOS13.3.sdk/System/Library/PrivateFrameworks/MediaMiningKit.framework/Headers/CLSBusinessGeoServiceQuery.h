/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSPOICache, NSArray, NSString;

@protocol GEOMapServiceTicket;

@interface CLSBusinessGeoServiceQuery : NSObject

{
    CLSPOICache *_cache;
    _Bool _isCancelled;
    NSArray *_muids;
    id <GEOMapServiceTicket> _ticket;
    NSArray *_resolvedBusinessItems;
}

@property (nonatomic, readonly) _Bool isCancelled;
@property (copy, nonatomic, readonly) NSArray *muids;
@property (nonatomic, readonly) id <GEOMapServiceTicket> ticket;
@property (nonatomic, readonly) NSArray *resolvedBusinessItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (void)prepareForRetry;
- (id)initWithMUIDs:(id)arg1;

@end
