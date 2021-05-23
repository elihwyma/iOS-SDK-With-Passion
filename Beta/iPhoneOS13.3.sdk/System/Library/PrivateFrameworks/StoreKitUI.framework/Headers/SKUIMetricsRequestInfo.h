/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMetricsRequestInfo : NSObject <Swift>

{
    _Bool _responseWasCached;
    _Bool _hasResponseWasCachedValue;
    double _requestStartTime;
    double _responseStartTime;
    double _responseEndTime;
}

@property (nonatomic) _Bool hasResponseWasCachedValue;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) _Bool responseWasCached;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportRequestTimesMessagePayload:(id)arg1;

@end
