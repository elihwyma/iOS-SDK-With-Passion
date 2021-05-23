/*
 Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CSLUIPBUIPluginTriggerResponse : PBCodable

{
    NSString *_errorString;
    _Bool _success;
}

@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasErrorString;
@property (retain, nonatomic) NSString *errorString;

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
