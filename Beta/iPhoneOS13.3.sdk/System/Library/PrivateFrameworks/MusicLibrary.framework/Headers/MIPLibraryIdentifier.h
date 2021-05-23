/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MIPLibraryIdentifier : PBCodable

{
    long long _libraryId;
    NSString *_libraryName;
    struct {
        unsigned int libraryId:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLibraryName;
@property (retain, nonatomic) NSString *libraryName;
@property (nonatomic) _Bool hasLibraryId;
@property (nonatomic) long long libraryId;

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
