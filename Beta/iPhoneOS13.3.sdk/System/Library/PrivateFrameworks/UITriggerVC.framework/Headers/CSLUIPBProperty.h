/*
 Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

#import <ProtocolBuffer/PBCodable.h>

@class CSLUIPBPropertyValue, NSString;

__attribute__((visibility("hidden")))
@interface CSLUIPBProperty : PBCodable

{
    NSString *_name;
    CSLUIPBPropertyValue *_value;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) CSLUIPBPropertyValue *value;

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
