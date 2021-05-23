/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBTopStoriesStyleConfig : PBCodable

{
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSString *_label;
    NSString *_type;
}

@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic, readonly) _Bool hasForegroundColor;
@property (retain, nonatomic) NSString *foregroundColor;
@property (nonatomic, readonly) _Bool hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
