/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCRequest.h>

@class GEOETARequest, NSString;

@interface GEOETARequestSimple : GEOXPCRequest

{
    GEOETARequest *_request;
}

@property (retain, nonatomic) GEOETARequest *request;
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
