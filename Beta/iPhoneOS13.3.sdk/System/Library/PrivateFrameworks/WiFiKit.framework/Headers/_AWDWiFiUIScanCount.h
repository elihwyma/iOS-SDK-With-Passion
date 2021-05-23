/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSString;

@interface _AWDWiFiUIScanCount : PBCodable <Swift>

{
    unsigned int _max;
    NSString *_section;
    struct {
        unsigned int max:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSection;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) _Bool hasMax;
@property (nonatomic) unsigned int max;

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
