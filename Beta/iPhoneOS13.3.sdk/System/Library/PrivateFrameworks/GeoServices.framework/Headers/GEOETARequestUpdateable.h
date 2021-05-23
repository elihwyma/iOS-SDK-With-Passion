/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCRequest.h>

@class GEODataConditionalConnectionProperties, GEOETATrafficUpdateRequest, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest

{
    GEOETATrafficUpdateRequest *_request;
    GEODataConditionalConnectionProperties *_connectionProperties;
}

@property (retain, nonatomic) GEOETATrafficUpdateRequest *request;
@property (retain, nonatomic) GEODataConditionalConnectionProperties *connectionProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (Class)replyClass;

- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)expectsReply;

@end
