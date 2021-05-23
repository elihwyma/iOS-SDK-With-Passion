/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSTimer;

@protocol _SFBarManagerDelegate;

@interface _SFBarManager : NSObject

{
    NSMapTable *_barToRegistrationMap;
    _Bool _deferUpdateAllRegistrations;
    _Bool _itemEnabledMap[8];
    _Bool _needsUpdateAllRegistrations;
    NSTimer *_coalescedUpdatesTimer;
    double _lastCoalescedUpdatesTime;
    CDUnknownBlockType _coalescedUpdatesBlock;
    _Bool _itemHiddenMap[8];
    _Bool _bookmarksItemSelected;
    id <_SFBarManagerDelegate> _delegate;
    double _downloadsItemProgress;
}

@property (weak, nonatomic) id <_SFBarManagerDelegate> delegate;
@property (nonatomic, getter=isBookmarksItemSelected) _Bool bookmarksItemSelected;
@property (nonatomic) double downloadsItemProgress;

- (id)init;
- (_Bool)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)pulseDownloadsItem;
- (void)setBarItem:(long long)arg1 enabled:(_Bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(_Bool)arg2;
- (void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3;
- (void)performCoalescedUpdates:(CDUnknownBlockType)arg1;
- (void)_updateAllRegistrations;
- (void)_invalidateCoalescedUpdatesTimer;
- (void)_performCoalescedUpdatesNow;
- (void)_updateRegistration:(id)arg1;
- (_Bool)isBarItemEnabled:(long long)arg1;
- (_Bool)isBarItemHidden:(long long)arg1;
- (void)visibleBarItemsNeedUpdate;
- (void)setDownloadsItemNeedsLayout;
- (unsigned long long)test_numberOfRegistrations;
- (id)test_registrationForBar:(id)arg1;

@end
