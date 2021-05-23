/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBInnerMessage : PBCodable

{
    unsigned int _counter;
    NSData *_debugInfo;
    NSData *_message;
    struct {
        unsigned int counter:1;
    } _has;
}

@property (retain, nonatomic) NSData *message;
@property (nonatomic) _Bool hasCounter;
@property (nonatomic) unsigned int counter;
@property (nonatomic, readonly) _Bool hasDebugInfo;
@property (retain, nonatomic) NSData *debugInfo;

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
