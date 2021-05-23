/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class SYPeer;

@interface SYClock : PBCodable

{
    unsigned long long _version;
    SYPeer *_peer;
}

@property (retain, nonatomic) SYPeer *peer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)increment;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)_myDescription;
- (unsigned long long)increaseBy:(unsigned long long)arg1;

@end
