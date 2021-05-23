/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NPKProtoPassSettingsChangedRequest : PBRequest

{
    unsigned long long _passSettings;
    NSString *_uniqueID;
    struct {
        unsigned int passSettings:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) _Bool hasPassSettings;
@property (nonatomic) unsigned long long passSettings;

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
