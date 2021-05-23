/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroMemory, MovieController, NSDate, NSOperationQueue, Project, VEKProgressWatcher;

@protocol MiroSequence;

__attribute__((visibility("hidden")))
@interface MiroAutoEditor : NSObject

{
    _Bool _shouldBuildMovieController;
    _Bool _shouldSave;
    _Bool _topLevelCancel;
    float _downloadProgress;
    float _progress;
    int _downloadPolicy;
    MiroMemory *_memory;
    Project *_project;
    long long _remainingAssetsToDownload;
    MovieController *_movieController;
    id _observer;
    CDUnknownBlockType _downloadCompleted;
    NSDate *_prepareStartedTime;
    NSDate *_tapStartedTime;
    double _autoEditStartedTimePPT;
    double _autoEditFinishedTimePPT;
    double _uiDidLoadTimePPT;
    double _uiDidAppearTimePPT;
    double _playbackStartedTimePPT;
    VEKProgressWatcher *_watcherProperty;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) MiroMemory *memory;
@property (retain) Project *project;
@property long long remainingAssetsToDownload;
@property float downloadProgress;
@property (nonatomic) float progress;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain) id <MiroSequence> sequence;
@property _Bool shouldBuildMovieController;
@property (retain) MovieController *movieController;
@property _Bool shouldSave;
@property int downloadPolicy;
@property _Bool topLevelCancel;
@property (retain, nonatomic) id observer;
@property (copy, nonatomic) CDUnknownBlockType downloadCompleted;
@property (retain) NSDate *prepareStartedTime;
@property (retain) NSDate *tapStartedTime;
@property double autoEditStartedTimePPT;
@property double autoEditFinishedTimePPT;
@property double uiDidLoadTimePPT;
@property double uiDidAppearTimePPT;
@property double playbackStartedTimePPT;
@property (retain) VEKProgressWatcher *watcherProperty;

+ (id)sharedInstanceForPregenerate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isBusy;
- (void)_cancel;
- (void)updateProgress:(float)arg1;
- (void)updateDownloadProgress:(float)arg1;
- (void)cancelAutoEdit;
- (void)pregenerateMemory:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithMemory:(id)arg1 shouldBuildMovieController:(_Bool)arg2;
- (void)_autoEditMemory:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performPersistWithPersistableThing:(id)arg1;
- (id)initForPregenerate;
- (void)_downloadSongForPregenrateWithMemory:(id)arg1;
- (void)_logMemoryStuff:(id)arg1;
- (void)fetchAndPrintAssets:(id)arg1 andMemory:(id)arg2;
- (void)logFreeze:(id)arg1 message:(id)arg2;
- (_Bool)shouldNotifyProgress;
- (void)performAutoEdit;
- (void)performAutoEditWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isAutoEditing;
- (void)updateProject:(id)arg1;
- (void)updateRemainingAssetsToDownload:(long long)arg1;
- (void)updateMovieController:(id)arg1;

@end
