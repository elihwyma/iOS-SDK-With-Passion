/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBDeleteShortcutEvent : PBCodable <Swift>

{
    unsigned int _actionCount;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    int _source;
    CDStruct_fce072d8 _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic) _Bool hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic, readonly) _Bool hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (nonatomic, readonly) _Bool hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;

@end
