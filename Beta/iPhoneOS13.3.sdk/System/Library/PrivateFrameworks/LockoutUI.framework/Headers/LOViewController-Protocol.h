/*
 Image: /System/Library/PrivateFrameworks/LockoutUI.framework/LockoutUI
 */

#import <LockoutUI/Swift-Protocol.h>

@class NSString;

@protocol LOViewControllerDelegate;

@protocol LOViewController <Swift>

@property (nonatomic, getter=isForSnapshot) _Bool forSnapshot;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool didFinishDismissing;
@property (weak, nonatomic) id <LOViewControllerDelegate> viewControllerDelegate;

@end
