/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOMapItemIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket

{
    NSDictionary *_components;
    GEOMapItemIdentifier *_identifier;
    int _resultProviderID;
    NSString *_contentProvider;
}

- (id)description;
- (id)initWithTraits:(id)arg1;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;

@end
