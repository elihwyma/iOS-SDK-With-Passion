/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class ACCMediaLibraryUpdatePlaylistContent, NSString;

@interface ACCMediaLibraryUpdatePlaylist : NSObject

{
    _Bool _folder;
    _Bool _geniusMix;
    _Bool _radioStation;
    _Bool _smartPlaylist;
    unsigned short _radioStationOrdering;
    int _contentStyle;
    NSString *_mediaLibraryUID;
    NSString *_revision;
    unsigned long long _persistentID;
    unsigned long long _validMask;
    NSString *_name;
    unsigned long long _parentPersistentID;
    ACCMediaLibraryUpdatePlaylistContent *_content;
}

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned long long validMask;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long parentPersistentID;
@property (nonatomic) _Bool folder;
@property (nonatomic) _Bool geniusMix;
@property (nonatomic) _Bool radioStation;
@property (nonatomic) _Bool smartPlaylist;
@property (nonatomic) unsigned short radioStationOrdering;
@property (nonatomic) int contentStyle;
@property (retain, nonatomic) ACCMediaLibraryUpdatePlaylistContent *content;

- (id)description;
- (id)debugDescription;
- (id)copyDict;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 dict:(id)arg2;
- (void)fillStruct:(CDStruct_fcdae12e *)arg1;

@end
