/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVContentKeyRequest, AVContentKeySession, AVWeakReference, NSError, NSMutableArray, NSMutableDictionary;

@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVStreamDataParserInternal : NSObject

{
    id <AVStreamDataParserOutputHandling> _delegate;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    long long _status;
    NSError *_error;
    AVAsset *_asset;
    NSMutableArray *_trackIDsNotProvidingMedia;
    struct OpaqueFigManifold *_figManifold;
    unsigned long long _typeIdOfInitialFigManifold;
    struct OpaqueCMBlockBuffer *_accumulatedInitializationData;
    _Bool _encounteredStreamDiscontinuity;
    AVWeakReference *_legacyStreamSession;
    AVContentKeySession *_defaultContentKeySession;
    AVWeakReference *_contentKeySession;
    AVContentKeyRequest *_sessionKeyRequest;
    _Bool _startedUsingInternalContentKeySession;
    int _currentTrackID;
    NSMutableDictionary *_tracksBecomingReadyByTrackID;
    NSMutableArray *_samplesBeforeReady;
    unsigned long long _samplesBeforeReadyTotalSize;
    CDStruct_1b6d18a9 _samplesBeforeReadyTotalDuration;
    NSMutableDictionary *_trackDecryptorsByTrackID;
    NSMutableDictionary *_trackFormatDescriptionsByTrackID;
}

@end
