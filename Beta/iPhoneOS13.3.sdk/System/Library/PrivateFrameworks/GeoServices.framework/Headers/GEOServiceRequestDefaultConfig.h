/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOServiceRequestDefaultConfig : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)urlType;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)additionalURLQueryItems;
- (id)additionalHTTPHeaders;
- (id)debugRequestName;
- (id)serviceTypeNumber;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;

@end
