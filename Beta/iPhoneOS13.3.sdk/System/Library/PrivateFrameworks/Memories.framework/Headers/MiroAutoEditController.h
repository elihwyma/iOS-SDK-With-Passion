/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroAutoEditLogger, MiroAutoEditProjectPolish, MiroAutoEdit_TrimController, MiroMemory, MiroRandomNumberGenerator, MovieController, NSMapTable, NSString, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditController : NSObject

{
    _Bool _shouldBuildMovieController;
    _Bool _shouldSkipPolish;
    MiroAutoEditLogger *_logger;
    NSMapTable *_trimRangeForClipMap;
    Project *_project;
    MiroMemory *_activeMemory;
    MovieController *_movieController;
    MiroRandomNumberGenerator *_kenBurnsRandomNumberGenerator;
    MiroAutoEdit_TrimController *_trimController;
    MiroAutoEditProjectPolish *_polisher;
}

@property (retain, nonatomic) MiroAutoEdit_TrimController *trimController;
@property (retain, nonatomic) MiroAutoEditProjectPolish *polisher;
@property (retain, nonatomic) NSMapTable *trimRangeForClipMap;
@property (retain, nonatomic) MiroAutoEditLogger *logger;
@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroMemory *activeMemory;
@property (nonatomic) _Bool shouldBuildMovieController;
@property (retain, nonatomic) MovieController *movieController;
@property (retain, nonatomic) MiroRandomNumberGenerator *kenBurnsRandomNumberGenerator;
@property (nonatomic) _Bool shouldSkipPolish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool titleIsSupported;

+ (struct CGSize)titleCardAssetSize;
+ (id)localImageRequestOptions;

- (void)autoEditProjectFromMemory:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_fetchStoreItemForMediaID:(unsigned long long)arg1;
- (id)_fetchMediaItemForMediaID:(unsigned long long)arg1;
- (id)_makePolisher;
- (void)_finishPolisher;
- (_Bool)_applyBackgroundMusicWithClip:(id)arg1;
- (void)autoEditToDuration:(int)arg1;
- (void)applyAutomaticThemeTitleToFirstClip;
- (void)_incrementCountForKey:(id)arg1 inDictionary:(id)arg2;
- (_Bool)applyBackgroundMusicWithSong:(id)arg1;
- (_Bool)applyBackgroundMusicWithMediaItem:(id)arg1;
- (id)_addProjectPlaceholderWithScenes:(id)arg1 name:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)applyMusic:(id)arg1;
- (id)_addPhotoAsset:(id)arg1 assetRep:(id)arg2 project:(id)arg3;
- (void)_applySpeedRangesToClip:(id)arg1 asset:(id)arg2 previousClip:(id)arg3;
- (void)_updateSelectedRangeOfClip:(id)arg1 withScene:(id)arg2;
- (id)clipForAsset:(id)arg1 project:(id)arg2;
- (void)_removeSpeedRampFromEndOfClip:(id)arg1;
- (void)_removeSpeedRampFromBeginningOfClip:(id)arg1;

@end
