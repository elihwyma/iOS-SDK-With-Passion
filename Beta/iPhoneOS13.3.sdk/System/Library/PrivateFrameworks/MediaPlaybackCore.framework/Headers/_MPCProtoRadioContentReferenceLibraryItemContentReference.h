/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <Swift>

{
    long long _cloudID;
    double _duration;
    double _fileSize;
    long long _storeAdamID;
    NSString *_albumArtistName;
    int _albumDiscCount;
    NSString *_albumName;
    int _albumTrackCount;
    NSString *_artistName;
    NSString *_composerName;
    int _contentType;
    NSString *_copyrightText;
    int _discNumber;
    NSString *_genreName;
    NSString *_title;
    int _trackNumber;
    int _year;
    _Bool _isCompilation;
    struct {
        unsigned int cloudID:1;
        unsigned int duration:1;
        unsigned int fileSize:1;
        unsigned int storeAdamID:1;
        unsigned int albumDiscCount:1;
        unsigned int albumTrackCount:1;
        unsigned int contentType:1;
        unsigned int discNumber:1;
        unsigned int trackNumber:1;
        unsigned int year:1;
        unsigned int isCompilation:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAlbumArtistName;
@property (retain, nonatomic) NSString *albumArtistName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic, readonly) _Bool hasArtistName;
@property (retain, nonatomic) NSString *artistName;
@property (nonatomic, readonly) _Bool hasComposerName;
@property (retain, nonatomic) NSString *composerName;
@property (nonatomic) _Bool hasContentType;
@property (nonatomic) int contentType;
@property (nonatomic, readonly) _Bool hasCopyrightText;
@property (retain, nonatomic) NSString *copyrightText;
@property (nonatomic) _Bool hasAlbumDiscCount;
@property (nonatomic) int albumDiscCount;
@property (nonatomic) _Bool hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) _Bool hasFileSize;
@property (nonatomic) double fileSize;
@property (nonatomic, readonly) _Bool hasGenreName;
@property (retain, nonatomic) NSString *genreName;
@property (nonatomic) _Bool hasIsCompilation;
@property (nonatomic) _Bool isCompilation;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) _Bool hasCloudID;
@property (nonatomic) long long cloudID;
@property (nonatomic) _Bool hasAlbumTrackCount;
@property (nonatomic) int albumTrackCount;
@property (nonatomic) _Bool hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (nonatomic) _Bool hasYear;
@property (nonatomic) int year;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
