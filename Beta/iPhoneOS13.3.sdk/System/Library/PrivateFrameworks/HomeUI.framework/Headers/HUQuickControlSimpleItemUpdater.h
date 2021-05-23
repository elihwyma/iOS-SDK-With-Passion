/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HFSimpleItemManager, NSString;

@protocol HUQuickControlItemHosting;

@interface HUQuickControlSimpleItemUpdater : NSObject <Swift>

{
    id <HUQuickControlItemHosting> _itemHost;
    HFSimpleItemManager *_itemManager;
}

@property (nonatomic, readonly) HFSimpleItemManager *itemManager;
@property (weak, nonatomic, readonly) id <HUQuickControlItemHosting> itemHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)initWithItemHost:(id)arg1;
- (void)quickControlItemHost:(id)arg1 didUpdateVisibility:(_Bool)arg2;
- (void)_setExternalItemManagerUpdatesDisabled:(_Bool)arg1;

@end
