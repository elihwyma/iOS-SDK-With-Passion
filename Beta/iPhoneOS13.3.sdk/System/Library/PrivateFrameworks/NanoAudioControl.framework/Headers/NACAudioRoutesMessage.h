/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NACAudioRoutesMessage : PBCodable

{
    NSMutableArray *_audioRoutes;
    NSString *_category;
}

@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *audioRoutes;

+ (Class)audioRoutesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearAudioRoutes;
- (void)addAudioRoutes:(id)arg1;
- (unsigned long long)audioRoutesCount;
- (id)audioRoutesAtIndex:(unsigned long long)arg1;

@end
