/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCReply.h>

@class GEOImageServiceResponse, NSString;

@interface GEOImageServiceReplySimple : GEOXPCReply

{
    GEOImageServiceResponse *_response;
}

@property (retain, nonatomic) GEOImageServiceResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
