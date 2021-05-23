/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSetupGalleryShortcutEvent : PBCodable <Swift>

{
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryCategoryIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    _Bool _completed;
    struct {
        unsigned int completed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasGalleryCategoryIdentifier;
@property (retain, nonatomic) NSString *galleryCategoryIdentifier;
@property (nonatomic, readonly) _Bool hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (nonatomic, readonly) _Bool hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (nonatomic) _Bool hasCompleted;
@property (nonatomic) _Bool completed;

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
