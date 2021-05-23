/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKCDPStopContainerRequest : PBRequest

{
    NSString *_containerName;
    NSString *_environment;
}

@property (nonatomic, readonly) _Bool hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic, readonly) _Bool hasEnvironment;
@property (retain, nonatomic) NSString *environment;

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
