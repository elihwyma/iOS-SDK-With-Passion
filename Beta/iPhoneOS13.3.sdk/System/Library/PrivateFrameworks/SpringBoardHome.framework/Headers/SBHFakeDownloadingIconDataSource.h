/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBHFakeDownloadingIconDataSource : NSObject

{
    _Bool isCancelable;
    _Bool isCloudDemoted;
    _Bool isPausable;
    _Bool isPrioritizable;
    _Bool _isPaused;
    NSString *_applicationBundleID;
    NSString *_applicationDisplayName;
    double _progress;
}

@property (copy, nonatomic) NSString *applicationBundleID;
@property (copy, nonatomic) NSString *applicationDisplayName;
@property (nonatomic) double progress;
@property (nonatomic) _Bool isCloudDemoted;
@property (nonatomic) _Bool isPrioritizable;
@property (nonatomic) _Bool isPausable;
@property (nonatomic) _Bool isCancelable;
@property (nonatomic) _Bool isPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isWaiting) _Bool waiting;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic, readonly, getter=isPausable) _Bool pausable;
@property (nonatomic, readonly, getter=isFailed) _Bool failed;
@property (nonatomic, readonly, getter=isCancelable) _Bool cancelable;
@property (nonatomic, readonly, getter=isInstalling) _Bool installing;
@property (nonatomic, readonly, getter=isDownloading) _Bool downloading;
@property (nonatomic, readonly, getter=isPrioritizable) _Bool prioritizable;
@property (nonatomic, readonly, getter=isCloudDemoted) _Bool cloudDemoted;
@property (nonatomic, readonly) Class iconClass;

- (_Bool)cancel;
- (_Bool)pause;
- (_Bool)resume;
- (_Bool)prioritize;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (long long)progressStateForIcon:(id)arg1;
- (double)progressPercentForIcon:(id)arg1;

@end
