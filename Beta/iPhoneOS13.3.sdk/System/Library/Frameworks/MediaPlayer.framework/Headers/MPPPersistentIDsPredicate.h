/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@interface MPPPersistentIDsPredicate : PBCodable <Swift>

{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _persistentIDs;
    _Bool _shouldContain;
    struct {
        unsigned int shouldContain:1;
    } _has;
}

@property (nonatomic) _Bool hasShouldContain;
@property (nonatomic) _Bool shouldContain;
@property (nonatomic, readonly) unsigned long long persistentIDsCount;
@property (nonatomic, readonly) long long *persistentIDs;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPersistentIDs;
- (void)addPersistentIDs:(long long)arg1;
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;
- (void)setPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;

@end
