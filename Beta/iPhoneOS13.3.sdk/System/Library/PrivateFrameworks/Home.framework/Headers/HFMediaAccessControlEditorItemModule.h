/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemModule.h>

@class HFMediaAccessControlEditorItemProvider, HMHome, NSSet, NSString;

@interface HFMediaAccessControlEditorItemModule : HFItemModule

{
    NSSet *_itemProviders;
    HMHome *_home;
    HFMediaAccessControlEditorItemProvider *_accessControlEditorItemProvider;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFMediaAccessControlEditorItemProvider *accessControlEditorItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_descriptionFooterTextForAccessControlDescriptor:(id)arg1 hasNonPeerToPeerMediaAccessories:(_Bool)arg2;

- (id)itemProviders;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (_Bool)containsItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (_Bool)_hasNonPeerToPeerMediaAccessories;
- (id)updateAccessControlDescriptor:(id)arg1;

@end
