/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest

{
    NSMutableArray *_currentSettingParams;
    NSString *_iAdIDString;
}

@property (nonatomic, readonly) _Bool hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString;
@property (retain, nonatomic) NSMutableArray *currentSettingParams;

+ (id)options;
+ (Class)currentSettingParamsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCurrentSettingParams:(id)arg1;
- (unsigned long long)currentSettingParamsCount;
- (void)clearCurrentSettingParams;
- (id)currentSettingParamsAtIndex:(unsigned long long)arg1;

@end
