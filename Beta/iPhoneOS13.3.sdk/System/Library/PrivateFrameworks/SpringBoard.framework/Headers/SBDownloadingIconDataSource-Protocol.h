/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBDownloadingIconDataSource <Swift>

@property (copy, nonatomic, readonly) NSString *applicationBundleID;
@property (copy, nonatomic, readonly) NSString *applicationDisplayName;
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

- (unsigned short)cancel;
- (unsigned short)pause;
- (unsigned short)resume;
- (unsigned short)prioritize;

@end
