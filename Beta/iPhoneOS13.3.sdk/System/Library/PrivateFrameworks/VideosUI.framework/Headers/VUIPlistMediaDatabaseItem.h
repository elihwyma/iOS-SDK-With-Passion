/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIPlistMediaDatabaseEntity.h>

#import <VideosUI/Swift-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL, VUIMediaItemCredits, VUIPlistMediaDatabaseSeason, _TVContentRating;

@interface VUIPlistMediaDatabaseItem : VUIPlistMediaDatabaseEntity <Swift>

{
    NSNumber *_local;
    VUIPlistMediaDatabaseSeason *_season;
    NSNumber *_duration;
    NSDate *_releaseDate;
    NSURL *_previewFrameURL;
    _TVContentRating *_contentRating;
    NSNumber *_colorCapability;
    NSNumber *_HLSColorCapability;
    NSNumber *_episodeNumber;
    NSString *_studio;
    VUIMediaItemCredits *_credits;
    NSURL *_playbackURL;
    NSURL *_filePathURL;
    NSDictionary *_offlineFPSKeys;
    NSString *_downloadState;
}

@property (weak, nonatomic) VUIPlistMediaDatabaseSeason *season;
@property (copy, nonatomic, readonly, getter=isPlayable) NSNumber *playable;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSURL *previewFrameURL;
@property (copy, nonatomic) _TVContentRating *contentRating;
@property (copy, nonatomic) NSNumber *colorCapability;
@property (copy, nonatomic) NSNumber *HLSColorCapability;
@property (copy, nonatomic) NSNumber *episodeNumber;
@property (copy, nonatomic) NSString *studio;
@property (copy, nonatomic) VUIMediaItemCredits *credits;
@property (copy, nonatomic) NSURL *playbackURL;
@property (copy, nonatomic) NSURL *filePathURL;
@property (copy, nonatomic) NSDictionary *offlineFPSKeys;
@property (copy, nonatomic) NSString *downloadState;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)isLocal;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end
