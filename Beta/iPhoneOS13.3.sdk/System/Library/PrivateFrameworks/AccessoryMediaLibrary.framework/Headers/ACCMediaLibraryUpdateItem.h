/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ACCMediaLibraryUpdateItem : NSObject

{
    _Bool _partOfCompilation;
    _Bool _local;
    unsigned short _albumTrackNumber;
    unsigned short _albumTrackCount;
    unsigned short _albumDiscNumber;
    unsigned short _albumDiscCount;
    unsigned short _chapterCount;
    int _type;
    int _rating;
    unsigned int _duration;
    NSString *_mediaLibraryUID;
    NSString *_revision;
    unsigned long long _persistentID;
    unsigned long long _validMask;
    NSString *_title;
    unsigned long long _albumPersistentID;
    NSString *_albumTitle;
    unsigned long long _artistPersistentID;
    NSString *_artist;
    unsigned long long _albumArtistPersistentID;
    NSString *_albumArtist;
    unsigned long long _genrePersistentID;
    NSString *_genre;
    unsigned long long _composerPersistentID;
    NSString *_composer;
}

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned long long validMask;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (nonatomic) int rating;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned long long albumPersistentID;
@property (retain, nonatomic) NSString *albumTitle;
@property (nonatomic) unsigned short albumTrackNumber;
@property (nonatomic) unsigned short albumTrackCount;
@property (nonatomic) unsigned short albumDiscNumber;
@property (nonatomic) unsigned short albumDiscCount;
@property (nonatomic) unsigned long long artistPersistentID;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) unsigned long long albumArtistPersistentID;
@property (retain, nonatomic) NSString *albumArtist;
@property (nonatomic) unsigned long long genrePersistentID;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) unsigned long long composerPersistentID;
@property (retain, nonatomic) NSString *composer;
@property (nonatomic) _Bool partOfCompilation;
@property (nonatomic) _Bool local;
@property (nonatomic) unsigned short chapterCount;

- (id)description;
- (id)debugDescription;
- (id)copyDict;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 dict:(id)arg2;
- (void)fillStruct:(CDStruct_b11abb91 *)arg1;

@end
