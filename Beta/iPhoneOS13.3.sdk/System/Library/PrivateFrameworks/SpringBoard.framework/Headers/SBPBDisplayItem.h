/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBPBDisplayItem : PBCodable <Swift>

{
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    int _type;
    NSString *_webClipIdentifier;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasSceneIdentifier;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (nonatomic, readonly) _Bool hasWebClipIdentifier;
@property (retain, nonatomic) NSString *webClipIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
