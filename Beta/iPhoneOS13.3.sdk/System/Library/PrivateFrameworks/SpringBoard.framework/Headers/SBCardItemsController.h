/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSMutableArray, NSMutableDictionary, NSString, NSXPCListener, SBWalletNotificationSource;

@interface SBCardItemsController : NSObject

{
    NSMutableDictionary *_cardItems;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    MCProfileConnection *_profileConnection;
    _Bool _cardWhileLockedAllowed;
    SBWalletNotificationSource *_walletNotificationSource;
}

@property (retain, nonatomic) SBWalletNotificationSource *walletNotificationSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_updateRestrictions;
- (void)_updateCardItem:(id)arg1;
- (void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_activateCardItem:(id)arg1 animated:(_Bool)arg2;
- (void)_deactivateCardItem:(id)arg1;

@end
