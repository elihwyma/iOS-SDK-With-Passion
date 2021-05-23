/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

@class GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineTicket : GEOAbstractRequestResponseTicket

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;

@end
