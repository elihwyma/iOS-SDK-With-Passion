/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSApplicationPlaceholder, NSMutableDictionary, NSMutableSet, NSString;

@protocol SBApplicationPlaceholderDelegate;

@interface SBApplicationPlaceholder : NSObject

{
    _Bool _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
    FBSApplicationPlaceholder *_placeholderProxy;
    id <SBApplicationPlaceholderDelegate> _delegate;
}

@property (nonatomic, readonly) FBSApplicationPlaceholder *placeholderProxy;
@property (weak, nonatomic) id <SBApplicationPlaceholderDelegate> delegate;
@property (nonatomic, readonly) Class iconClass;
@property (nonatomic, readonly, getter=isPrioritizable) _Bool prioritizable;
@property (nonatomic, readonly, getter=isPausable) _Bool pausable;
@property (nonatomic, readonly, getter=isCancelable) _Bool cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *applicationBundleID;
@property (copy, nonatomic, readonly) NSString *applicationDisplayName;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isWaiting) _Bool waiting;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic, readonly, getter=isFailed) _Bool failed;
@property (nonatomic, readonly, getter=isInstalling) _Bool installing;
@property (nonatomic, readonly, getter=isDownloading) _Bool downloading;
@property (nonatomic, readonly, getter=isCloudDemoted) _Bool cloudDemoted;

+ (id)backgroundQueue;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (_Bool)cancel;
- (_Bool)pause;
- (_Bool)resume;
- (_Bool)prioritize;
- (unsigned long long)installType;
- (void)placeholderProgressDidUpdate:(id)arg1;
- (void)placeholderDidChangeSignificantly:(id)arg1;
- (_Bool)isDone;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (_Bool)iconCanTruncateLabel:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (long long)progressStateForIcon:(id)arg1;
- (double)progressPercentForIcon:(id)arg1;
- (_Bool)isProgressPausedForIcon:(id)arg1;
- (id)badgeNumberOrStringForIcon:(id)arg1;
- (id)formattedAccessoryStringForIcon:(id)arg1;
- (long long)accessoryTypeForIcon:(id)arg1;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (_Bool)_shouldDisplayAppName;
- (void)_progressChanged;
- (void)_reloadThumbnailImage;
- (id)_iconImageKeyForBundleID:(id)arg1 info:(struct SBIconImageInfo)arg2;
- (void)_generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)_generatePendingIconFormats;
- (_Bool)_shouldDisplayAppNameAtIconLocation:(id)arg1;
- (id)_getOrGenerateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)initWithPlaceholderProxy:(id)arg1;
- (_Bool)isStoreDownload;

@end
