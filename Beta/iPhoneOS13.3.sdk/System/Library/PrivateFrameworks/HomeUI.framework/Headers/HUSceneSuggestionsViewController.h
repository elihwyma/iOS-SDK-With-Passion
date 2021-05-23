/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUSceneSuggestionsItemManager, NSString;

@protocol HUPresentationDelegate, HUSceneEditorDelegate;

@interface HUSceneSuggestionsViewController : HUItemTableViewController <Swift>

{
    id <HUPresentationDelegate> _presentationDelegate;
    id <HUSceneEditorDelegate> _sceneEditorDelegate;
    HUSceneSuggestionsItemManager *_suggestionsItemManager;
}

@property (weak, nonatomic) HUSceneSuggestionsItemManager *suggestionsItemManager;
@property (weak, nonatomic) id <HUSceneEditorDelegate> sceneEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

- (id)init;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)_showActionEditorForActionSetSuggestionItem:(id)arg1;
- (void)_showActionEditorForNewCustomScene;

@end
