/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIPlistMediaDatabaseEntity.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSNumber, VUIPlistMediaDatabaseShow;

@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <Swift>

{
    VUIPlistMediaDatabaseShow *_show;
    NSNumber *_seasonNumber;
    NSArray *_episodes;
}

@property (weak, nonatomic) VUIPlistMediaDatabaseShow *show;
@property (copy, nonatomic) NSNumber *seasonNumber;
@property (copy, nonatomic) NSArray *episodes;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)isLocal;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1 show:(id)arg2;
- (id)episodeForIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 show:(id)arg2;

@end
