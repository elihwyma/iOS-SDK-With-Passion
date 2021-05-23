/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCategoryTicket : GEOAbstractRequestResponseTicket

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) CDStruct_d1a7ebee dataRequestKind;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;

@end
