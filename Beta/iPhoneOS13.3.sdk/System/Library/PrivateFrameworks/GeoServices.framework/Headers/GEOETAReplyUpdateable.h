/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCReply.h>

@class GEOETATrafficUpdateResponse, NSString;

@interface GEOETAReplyUpdateable : GEOXPCReply

{
    GEOETATrafficUpdateResponse *_response;
}

@property (retain, nonatomic) GEOETATrafficUpdateResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
