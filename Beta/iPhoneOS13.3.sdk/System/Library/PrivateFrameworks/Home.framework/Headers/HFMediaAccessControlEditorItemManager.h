/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemManager.h>

@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager : HFItemManager

{
    HFMediaAccessControlEditorItemModule *_accessControlEditorItemModule;
}

@property (nonatomic, readonly) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;

@end
