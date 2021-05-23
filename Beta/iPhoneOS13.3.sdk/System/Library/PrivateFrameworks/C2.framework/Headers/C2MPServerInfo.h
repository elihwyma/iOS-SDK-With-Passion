/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPServerInfo : PBCodable

{
    NSString *_partition;
    NSString *_serviceBuild;
    NSString *_serviceInstance;
    NSString *_serviceName;
}

@property (nonatomic, readonly) _Bool hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic, readonly) _Bool hasPartition;
@property (retain, nonatomic) NSString *partition;
@property (nonatomic, readonly) _Bool hasServiceBuild;
@property (retain, nonatomic) NSString *serviceBuild;
@property (nonatomic, readonly) _Bool hasServiceInstance;
@property (retain, nonatomic) NSString *serviceInstance;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
