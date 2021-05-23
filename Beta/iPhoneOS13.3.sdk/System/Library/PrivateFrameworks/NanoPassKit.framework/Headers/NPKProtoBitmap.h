/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoBitmap : PBCodable

{
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    unsigned long long _height;
    unsigned long long _width;
    NSData *_bitmapData;
    unsigned int _bitmapInfo;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned int bitmapInfo;
@property (retain, nonatomic) NSData *bitmapData;

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
