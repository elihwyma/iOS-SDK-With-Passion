/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFStaticItemProvider, HUAppleMusicAccountItemProvider, HUAppleMusicItem, NSString;

@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountModule : HFItemModule

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HUAppleMusicAccountItemProvider *_appleMusicAccountItemProvider;
    HUAppleMusicItem *_loggedInUsernameItem;
    HUAppleMusicItem *_logoutItem;
    HUAppleMusicItem *_loginItem;
    unsigned long long _state;
    CDUnknownBlockType _stateChangeObserver;
    HFStaticItemProvider *_appleMusicAccountActionItemProvider;
}

@property (nonatomic, readonly) HFStaticItemProvider *appleMusicAccountActionItemProvider;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) HUAppleMusicAccountItemProvider *appleMusicAccountItemProvider;
@property (nonatomic, readonly) HUAppleMusicItem *loggedInUsernameItem;
@property (nonatomic, readonly) HUAppleMusicItem *logoutItem;
@property (nonatomic, readonly) HUAppleMusicItem *loginItem;
@property (nonatomic, readonly) unsigned long long numberOfKnownAccounts;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) CDUnknownBlockType stateChangeObserver;
@property (nonatomic, readonly) NSString *explicitAccountSignedInMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)dispatcher:(id)arg1 appleMusicAccountsDidUpdate:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 itemUpdater:(id)arg2;
- (id)signInMessage:(_Bool)arg1;

@end
