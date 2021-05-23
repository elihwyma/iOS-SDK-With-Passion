/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATAssetLinkPowerLoggerAggregationKey : NSObject

{
    long long _linkType;
    NSString *_dataclass;
    NSString *_assetType;
}

@property (readonly) long long linkType;
@property (readonly) NSString *dataclass;
@property (readonly) NSString *assetType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLinkType:(long long)arg1 dataclass:(id)arg2 assetType:(id)arg3;

@end
