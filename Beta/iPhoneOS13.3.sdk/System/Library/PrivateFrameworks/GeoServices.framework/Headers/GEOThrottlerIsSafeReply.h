/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCReply.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeReply : GEOXPCReply

{
    double _nextSafeRequestTime;
    int _availableRequestCount;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (nonatomic) double nextSafeRequestTime;
@property (nonatomic) int availableRequestCount;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
