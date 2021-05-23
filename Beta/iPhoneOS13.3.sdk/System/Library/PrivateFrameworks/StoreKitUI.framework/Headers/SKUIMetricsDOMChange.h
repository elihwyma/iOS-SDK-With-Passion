/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMetricsDOMChange : NSObject <Swift>

{
    _Bool _fromDeferredMessage;
    double _buildStartTime;
    double _buildEndTime;
    double _renderStartTime;
    double _renderEndTime;
}

@property (nonatomic) double buildStartTime;
@property (nonatomic) double buildEndTime;
@property (nonatomic) double renderStartTime;
@property (nonatomic) double renderEndTime;
@property (nonatomic, getter=isFromDeferredMessage) _Bool fromDeferredMessage;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportDomBuildTimesMessagePayload:(id)arg1;

@end
