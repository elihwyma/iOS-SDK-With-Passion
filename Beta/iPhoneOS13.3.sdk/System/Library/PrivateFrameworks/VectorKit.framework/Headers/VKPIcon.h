/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPIcon : PBCodable

{
    unsigned long long _matchingStyleAttributeLongValue;
    unsigned int _anchorPointX;
    unsigned int _anchorPointY;
    unsigned int _atlasIndex;
    unsigned int _iconRectHeight;
    unsigned int _iconRectWidth;
    unsigned int _iconRectX;
    unsigned int _iconRectY;
    unsigned int _matchingStyleAttributeKey;
    int _matchingStyleAttributeValue;
    NSString *_name;
    unsigned int _quadIndex;
    int _size;
    struct {
        unsigned int matchingStyleAttributeLongValue:1;
        unsigned int anchorPointX:1;
        unsigned int anchorPointY:1;
        unsigned int iconRectHeight:1;
        unsigned int iconRectWidth:1;
        unsigned int iconRectX:1;
        unsigned int iconRectY:1;
        unsigned int matchingStyleAttributeKey:1;
        unsigned int matchingStyleAttributeValue:1;
        unsigned int size:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) _Bool hasAnchorPointX;
@property (nonatomic) unsigned int anchorPointX;
@property (nonatomic) _Bool hasAnchorPointY;
@property (nonatomic) unsigned int anchorPointY;
@property (nonatomic) _Bool hasIconRectX;
@property (nonatomic) unsigned int iconRectX;
@property (nonatomic) _Bool hasIconRectY;
@property (nonatomic) unsigned int iconRectY;
@property (nonatomic) _Bool hasIconRectWidth;
@property (nonatomic) unsigned int iconRectWidth;
@property (nonatomic) _Bool hasIconRectHeight;
@property (nonatomic) unsigned int iconRectHeight;
@property (nonatomic) _Bool hasMatchingStyleAttributeKey;
@property (nonatomic) unsigned int matchingStyleAttributeKey;
@property (nonatomic) _Bool hasMatchingStyleAttributeValue;
@property (nonatomic) int matchingStyleAttributeValue;
@property (nonatomic) _Bool hasMatchingStyleAttributeLongValue;
@property (nonatomic) unsigned long long matchingStyleAttributeLongValue;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) int size;

- (void)dealloc;
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
