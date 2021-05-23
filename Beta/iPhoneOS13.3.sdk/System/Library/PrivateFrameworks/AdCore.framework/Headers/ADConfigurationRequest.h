/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray;

@interface ADConfigurationRequest : PBRequest

{
    NSMutableArray *_currentConfigurations;
    NSData *_iAdID;
}

@property (retain, nonatomic) NSMutableArray *currentConfigurations;
@property (nonatomic, readonly) _Bool hasIAdID;
@property (retain, nonatomic) NSData *iAdID;

+ (id)options;
+ (Class)currentConfigurationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCurrentConfiguration:(id)arg1;
- (unsigned long long)currentConfigurationsCount;
- (void)clearCurrentConfigurations;
- (id)currentConfigurationAtIndex:(unsigned long long)arg1;

@end
