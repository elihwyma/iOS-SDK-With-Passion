/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface ATPRequest : PBRequest

{
    NSString *_command;
    NSString *_dataClass;
}

@property (nonatomic, readonly) _Bool hasCommand;
@property (retain, nonatomic) NSString *command;
@property (nonatomic, readonly) _Bool hasDataClass;
@property (retain, nonatomic) NSString *dataClass;

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
