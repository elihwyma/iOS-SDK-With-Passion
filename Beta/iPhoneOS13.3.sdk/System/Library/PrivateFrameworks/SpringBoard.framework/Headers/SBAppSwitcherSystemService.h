/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBServiceClientAuthenticator, NSString, SBCommandTabController, SBRecentAppLayouts;

@interface SBAppSwitcherSystemService : NSObject

{
    FBServiceClientAuthenticator *_requestAppearanceForHiddenAppAuthenticator;
    SBRecentAppLayouts *_recentAppLayouts;
    SBCommandTabController *_commandTabController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithRecentAppLayoutsController:(id)arg1 commandTabController:(id)arg2;
- (void)requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 forClient:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)systemServiceServer:(id)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg2 assertionPort:(id)arg3 forClient:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;

@end
