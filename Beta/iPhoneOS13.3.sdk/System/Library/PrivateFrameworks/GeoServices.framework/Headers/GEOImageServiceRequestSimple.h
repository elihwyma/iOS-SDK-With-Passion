/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCRequest.h>

@class GEOImageServiceRequest, NSString, NSUUID;

@interface GEOImageServiceRequestSimple : GEOXPCRequest

{
    GEOImageServiceRequest *_request;
    NSUUID *_identifier;
}

@property (retain, nonatomic) GEOImageServiceRequest *request;
@property (retain, nonatomic) NSUUID *identifier;
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
