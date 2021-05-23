/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig

{
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
    unsigned long long _multipathServiceType;
}

- (double)timeout;
- (unsigned long long)multipathServiceType;
- (unsigned long long)urlType;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)additionalHTTPHeaders;
- (id)serviceTypeNumber;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;

@end
