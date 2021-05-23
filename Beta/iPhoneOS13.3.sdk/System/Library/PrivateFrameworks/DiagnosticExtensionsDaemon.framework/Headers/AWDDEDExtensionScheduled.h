/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDDEDExtensionScheduled : PBCodable

{
    unsigned long long _delay;
    unsigned long long _timestamp;
    NSString *_extension;
    struct {
        unsigned int delay:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) _Bool hasDelay;
@property (nonatomic) unsigned long long delay;

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
