/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SBSLockScreenContentAction, UIView, UIViewController;

@protocol CSAdjunctItemHosting;

@interface CSAdjunctListItem : NSObject

{
    NSMutableSet *_actions;
    UIView *platterView;
    UIViewController<CSAdjunctItemHosting> *contentHost;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSLockScreenContentAction *action;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost;

- (id)init;
- (_Bool)isValid;
- (void)addAction:(id)arg1;
- (void)removeAction:(id)arg1;

@end
