/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket

{
    NSArray *_categories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) CDStruct_d1a7ebee dataRequestKind;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (id)resultSectionHeaderForCategory:(id)arg1;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 categories:(id)arg3;

@end
