/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBBrowseGalleryCategoryEvent : PBCodable <Swift>

{
    NSString *_galleryCategoryIdentifier;
    NSString *_key;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasGalleryCategoryIdentifier;
@property (retain, nonatomic) NSString *galleryCategoryIdentifier;

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
