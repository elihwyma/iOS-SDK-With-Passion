/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@class NSString, SBSLockScreenContentAction, UIView, UIViewController;

@protocol CSAdjunctItemHosting;

@protocol CSAdjunctListItemProviding <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SBSLockScreenContentAction *action;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost;

@end
