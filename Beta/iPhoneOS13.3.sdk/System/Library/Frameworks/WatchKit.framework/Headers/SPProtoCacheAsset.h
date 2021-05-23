/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SPProtoCacheAsset : PBCodable

{
    double _accessDate;
    unsigned long long _size;
    NSString *_key;
    unsigned int _state;
}

@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double accessDate;

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
