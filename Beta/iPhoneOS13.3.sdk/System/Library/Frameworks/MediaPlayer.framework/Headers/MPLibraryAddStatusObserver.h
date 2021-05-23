/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, MPCloudController, MPCloudServiceStatusController, MPModelObject;

@interface MPLibraryAddStatusObserver : NSObject

{
    _Bool _needsStatusUpdate;
    MPCloudController *_cloudController;
    MPCloudServiceStatusController *_cloudServiceStatusController;
    struct MPLibraryAddStatusObserverConfiguration _configuration;
    unsigned long long _currentStatus;
    CDUnknownBlockType _statusBlock;
    MPModelObject *_identifyingModelObject;
    ICUserIdentity *_userIdentity;
}

@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) unsigned long long currentStatus;
@property (copy, nonatomic) CDUnknownBlockType statusBlock;
@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration configuration;
@property (nonatomic, readonly) MPModelObject *identifyingModelObject;

- (id)init;
- (void)dealloc;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (unsigned long long)_calculateCurrentStatus;
- (void)_updateCurrentStatus;
- (id)initWithUserIdentity:(id)arg1;
- (void)configureWithModelObject:(id)arg1;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateInProgressDidChangeNotification:(id)arg1;

@end
