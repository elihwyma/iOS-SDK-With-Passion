/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODataRequestThrottlerToken, GEOMapServiceTraits, NSDictionary;

@interface GEOAbstractTicket : NSObject

{
    GEOMapServiceTraits *_traits;
    unsigned long long _cachePolicy;
    NSDictionary *_responseUserInfo;
    _Bool _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly, getter=isCancelled) _Bool cancelled;

- (id)init;
- (id)description;
- (void)cancel;
- (id)initWithTraits:(id)arg1;
- (void)setThrottlerToken:(id)arg1;

@end
