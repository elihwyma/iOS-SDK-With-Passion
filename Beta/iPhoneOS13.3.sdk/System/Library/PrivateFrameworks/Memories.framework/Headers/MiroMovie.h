/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem, MiroAutoEditor, MiroExportController, MiroMemory, NSSet, NSString, PHAsset, PHAssetCollection, UIViewController;

@protocol MiroMovieDelegate;

@interface MiroMovie : NSObject

{
    _Bool _allowNonPHMemoryForUnitTesting;
    PHAsset *_keyAsset;
    PHAssetCollection *_collection;
    id <MiroMovieDelegate> _delegate;
    MiroMemory *_memory;
    AVPlayerItem *_playerItem;
    MiroAutoEditor *_autoEditor;
    NSString *_outputString;
    id _associatedPlayerViewController;
    MiroExportController *_exportController;
}

@property (retain, nonatomic) MiroMemory *memory;
@property (retain) AVPlayerItem *playerItem;
@property (retain) MiroAutoEditor *autoEditor;
@property (nonatomic) _Bool allowNonPHMemoryForUnitTesting;
@property (retain, nonatomic) NSString *outputString;
@property (weak, nonatomic) id associatedPlayerViewController;
@property (retain, nonatomic) MiroExportController *exportController;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *collection;
@property (nonatomic, readonly) UIViewController *playerViewController;
@property (nonatomic, readonly) NSSet *defaultAssets;
@property (weak, nonatomic) id <MiroMovieDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)runTest:(id)arg1 options:(id)arg2 usingPlayerViewController:(id)arg3;

- (id)init;
- (void)dealloc;
- (id)dataRepresentation;
- (id)title;
- (void)setTitle:(id)arg1;
- (float)duration;
- (id)initWithDataRepresentation:(id)arg1;
- (id)subtitle;
- (void)setDuration:(float)arg1;
- (void)setSubtitle:(id)arg1;
- (double)maximumDuration;
- (void)_backgroundInit;
- (long long)mood;
- (void)addAsset:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (void)setMood:(long long)arg1;
- (void)removeAsset:(id)arg1;
- (id)titleStyle;
- (void)setTitleStyle:(id)arg1;
- (void)setSongID:(id)arg1;
- (id)songID;
- (void)prepareForPlayback;
- (id)production;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)diagnosticItemProvider;
- (_Bool)isCompelling;
- (void)pregenerateMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPregenerateMovie;
- (void)_teardownInternals;
- (void)didFinishExport;
- (void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(_Bool)arg3;
- (void)cancelPrepareForPlayback;
- (id)createPHMemory;
- (void)_generateProjectWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_exportProject:(id)arg1 presets:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)moodIDmap;
- (void)generateProjectWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playerItemWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)exportWithPresets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)availableSongs;
- (id)availableTitleStyles;
- (void)removeClip:(id)arg1;
- (void)setRangeOfInterest:(CDStruct_e83c9415)arg1 forClip:(id)arg2;
- (void)setVolume:(unsigned long long)arg1 forClip:(id)arg2;
- (id)exportSessionWithPresetName:(id)arg1;
- (id)_getMiroTapToRadarFilePath;
- (id)_tapToRadarDebug;
- (id)_tapToRadarMemory;
- (id)_tapToRadarBlueprint;
- (id)_tapToRadarPicklist;
- (id)_tapToRadarRanges;
- (id)_tapToRadarMediaanalysis_db;
- (id)_tapToRadarMediaanalysis_db_shm;
- (id)_tapToRadarMediaanalysis_db_wal;
- (void)tapToRadar;
- (void)_testPregenerateWithCompletion:(CDUnknownBlockType)arg1;

@end
