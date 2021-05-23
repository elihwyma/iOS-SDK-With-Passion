/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer, PLProgressView;

__attribute__((visibility("hidden")))
@interface PUPhotoSharingManager : NSObject

{
    PLProgressView *_publishingProgressView;
    NSTimer *_publishingProgressTimer;
    NSMutableArray *_publishingAgents;
    long long _videoRemakingCount;
    long long _appSuspensionCount;
    long long _networkPromptCount;
    unsigned long long _backgroundTaskIdentifier;
}

@property (nonatomic, getter=isRemaking) _Bool remaking;
@property (nonatomic, readonly) PLProgressView *publishingProgressView;

+ (id)sharedInstance;

- (void)dealloc;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)cancelPublishing;
- (void)_setFlag:(_Bool)arg1 forReferenceCounter:(long long *)arg2 performIfChanged:(CDUnknownBlockType)arg3;
- (void)_setNetworkPromptShowing:(_Bool)arg1;
- (void)_setDelaysAppSuspend:(_Bool)arg1;
- (id)_currentPublishingAgent;
- (void)_schedulePublishingProgressViewUpdate;
- (void)_updatePublishingProgressView:(id)arg1;
- (void)_cleanUpPublishingProgressView;
- (void)_addPublishingAgentIfNeeded:(id)arg1;
- (void)_removePublishingAgent:(id)arg1;

@end
