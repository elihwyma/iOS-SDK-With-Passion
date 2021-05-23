/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig

{
    NSNumber *_requestPriority;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)multipathServiceType;
- (unsigned long long)urlType;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)additionalURLQueryItems;
- (id)additionalHTTPHeaders;
- (id)serviceTypeNumber;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)initWithRequestPriority:(id)arg1;

@end
