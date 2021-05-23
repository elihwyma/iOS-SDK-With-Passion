/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WKCrownSequencer;

@interface WKInterfaceController : NSObject

{
    WKCrownSequencer *_crownSequencer;
    NSArray *_topLevelObjects;
    NSArray *_properties;
    NSString *_viewControllerID;
    NSMutableDictionary *_gestureRecognizers;
    NSMutableArray *_uninstalledGestureIDs;
    NSMutableArray *_pendingGestureInstallationFinishedBlocks;
    struct CGRect _contentFrame;
}

@property (retain, nonatomic) NSArray *topLevelObjects;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) struct CGRect contentFrame;
@property (retain, nonatomic) NSString *viewControllerID;
@property (retain, nonatomic) NSMutableDictionary *gestureRecognizers;
@property (retain, nonatomic) NSMutableArray *uninstalledGestureIDs;
@property (retain, nonatomic) NSMutableArray *pendingGestureInstallationFinishedBlocks;
@property (nonatomic, readonly) WKCrownSequencer *crownSequencer;

+ (struct CGRect)screenBounds;
+ (double)screenScale;
+ (_Bool)openParentApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (void)reloadRootPageControllersWithNames:(id)arg1 contexts:(id)arg2 orientation:(long long)arg3 pageIndex:(long long)arg4;
+ (void)_insertPageControllersAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)_movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)_removePageControllersAtIndexes:(id)arg1;

- (id)init;
- (void)setTitle:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (void)didRegisterWithRemoteInterface;
- (void)didDeactivate;
- (void)handleUserActivity:(id)arg1;
- (void)table:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)contextsForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3;
- (id)contextForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3;
- (id)contextsForSegueWithIdentifier:(id)arg1;
- (id)contextForSegueWithIdentifier:(id)arg1;
- (void)willActivate;
- (void)_handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2 remoteNotification:(id)arg3 localNotification:(id)arg4;
- (void)handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2;
- (void)scrollToObject:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3;
- (void)awakeWithContext:(id)arg1;
- (void)didAppear;
- (void)willDisappear;
- (void)pickerDidSettle:(id)arg1;
- (void)pickerDidFocus:(id)arg1;
- (void)pickerDidResignFocus:(id)arg1;
- (void)pushControllerWithName:(id)arg1 context:(id)arg2;
- (void)popController;
- (void)popToRootController;
- (void)interfaceDidScrollToTop;
- (void)interfaceOffsetDidScrollToTop;
- (void)interfaceOffsetDidScrollToBottom;
- (void)becomeCurrentPage;
- (void)presentControllerWithName:(id)arg1 context:(id)arg2;
- (void)presentControllerWithNames:(id)arg1 contexts:(id)arg2;
- (void)dismissController;
- (void)presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentTextInputControllerWithSuggestionsForLanguage:(CDUnknownBlockType)arg1 allowedInputMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissTextInputController;
- (void)presentMediaPlayerControllerWithURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissMediaPlayerController;
- (void)presentAudioRecorderControllerWithOutputURL:(id)arg1 preset:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissAudioRecorderController;
- (void)presentAddPassesControllerWithPasses:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAddPassesController;
- (void)addMenuItemWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithImageNamed:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithItemIcon:(long long)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)clearAllMenuItems;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2;
- (void)invalidateUserActivity;
- (void)beginGlanceUpdates;
- (void)endGlanceUpdates;

@end
