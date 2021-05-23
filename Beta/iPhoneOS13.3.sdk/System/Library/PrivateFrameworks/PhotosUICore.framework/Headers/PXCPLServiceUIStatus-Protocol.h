/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@protocol PXCPLServiceUIStatus <Swift>

@property (nonatomic, readonly) NSString *referencedItemsDescription;
@property (nonatomic, readonly) NSString *stateDescription;
@property (nonatomic, readonly) NSString *failureDescription;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) CDUnknownBlockType action;
@property (nonatomic, readonly) NSString *actionTitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertTitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertSubtitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertButtonTitle;

@end
