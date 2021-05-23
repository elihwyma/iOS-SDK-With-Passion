/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, OKPresentation, OKProducerPlugin;

@protocol OKProducerDelegate;

@interface OKProducer : NSObject

{
    id <OKProducerDelegate> _delegate;
    OKProducerPlugin *_plugin;
    OKPresentation *_presentation;
    NSOperationQueue *_liveAuthoringOperationQueue;
    _Bool _liveAuthoringInProgress;
    double _startLiveAuthorTime;
}

@property (retain, nonatomic) OKProducerPlugin *plugin;
@property (retain, nonatomic) OKPresentation *presentation;
@property (nonatomic) id <OKProducerDelegate> delegate;

+ (void)setupJavascriptContext:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)supportsLiveAuthoring;
- (_Bool)author:(_Bool)arg1 progressBlock:(CDUnknownBlockType)arg2 requiresProducer:(inout _Bool *)arg3 error:(id *)arg4;
- (_Bool)liveAuthorInitialBootstrap:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)initWithPresentation:(id)arg1 andPlugin:(id)arg2;
- (void)cancelLiveAuthoring:(_Bool)arg1;
- (_Bool)needsLiveAuthoring;
- (id)liveAuthorNextChunk:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (float)currentLiveAuthoringProgress;
- (unsigned long long)totalNumberOfLiveAuthoringItems;
- (float)liveAuthoringProgressForMediaItem:(id)arg1;
- (id)liveAuthoringOperationQueue;
- (double)_continueLiveAuthoringDelay;
- (void)_continueLiveAuthoring;
- (_Bool)migratePresentation:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)cleanupPresentation:(CDUnknownBlockType)arg1;
- (void)updateSynopsisGuideline;
- (_Bool)prepareLiveAuthoringIfNeeded:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)startLiveAuthoringIfNeeded;
- (_Bool)resetLiveAuthoring;
- (void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2 onWidget:(id)arg3;
- (void)addSettingsFromDictionary:(id)arg1 onWidget:(id)arg2;
- (void)didPanMediaForWidget:(id)arg1 toState:(id)arg2;
- (void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2;

@end
