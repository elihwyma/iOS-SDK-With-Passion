/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCRequest.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeRequest : GEOXPCRequest

{
    unsigned long long _targetSize;
}

@property (nonatomic) unsigned long long targetSize;
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
