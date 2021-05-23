/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <Swift>

{
    GEORouteHypothesisRequest *_request;
}

@property (nonatomic, readonly) GEORouteHypothesisRequest *request;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isEqual:(id)arg1;
- (id)initWithRouteHypothesisRequest:(id)arg1;

@end
