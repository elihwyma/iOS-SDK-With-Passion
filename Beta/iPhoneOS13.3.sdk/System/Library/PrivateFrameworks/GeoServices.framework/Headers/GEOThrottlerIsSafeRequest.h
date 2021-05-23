/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOXPCRequest.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest

{
    int _requestKindType;
    int _requestKindSubtype;
    _Bool _nextSafeRequestTime;
    _Bool _availableRequestCount;
    _Bool _includeToken;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (nonatomic) int requestKindType;
@property (nonatomic) int requestKindSubtype;
@property (nonatomic) _Bool nextSafeRequestTime;
@property (nonatomic) _Bool availableRequestCount;
@property (nonatomic) _Bool includeToken;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken;
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
