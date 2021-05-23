/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCReply.h>

@class GEOTransitRouteUpdateResponse, NSString;

@interface GEOTransitRouteUpdateReplySimple : GEOXPCReply

{
    GEOTransitRouteUpdateResponse *_response;
}

@property (retain, nonatomic) GEOTransitRouteUpdateResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
