/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKPlaceCardActionItem, NSString, TUCallProvider;

@interface MKPlaceActionManager : NSObject

{
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
    _Bool _placeInBookmarks;
    _Bool _placeInShortcuts;
    _Bool _showContactActions;
    _Bool _isCurrentLocation;
    id _placeCardDelegate;
    id _transitCardDelegate;
}

@property (nonatomic) _Bool placeInBookmarks;
@property (nonatomic) _Bool placeInShortcuts;
@property (nonatomic) _Bool showContactActions;
@property (nonatomic) _Bool isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate;
@property (weak, nonatomic) id transitCardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)options;
- (id)delegate;
- (void)openURL:(id)arg1;
- (id)contact;
- (id)mapItem;
- (void)_launchMaps;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)placeItem;
- (id)createRowActions;
- (id)createFooterActions;
- (_Bool)_showReportAProblem;
- (id)transitLineItem;
- (void)_canMakeCalls:(CDUnknownBlockType)arg1;
- (id)transitDelegate;
- (_Bool)_isCurrentLocationOrDroppedPin;
- (_Bool)_showCollectionItem;
- (id)collectionItemForFooter:(_Bool)arg1;
- (void)_enableStoreAction;
- (id)shortPlacecardFooterActions;
- (_Bool)_showHomeShortcutItem;
- (id)addtoHomeItem;
- (id)favoriteItemForFooter;
- (_Bool)_showAddPlaceEdit;
- (id)reportAProblemAddPlaceFooterAction;
- (_Bool)_showSuggestAnEdit;
- (id)reportAProblemFooterAction;
- (void)addLayoutInfoIfNeeded:(id)arg1;
- (_Bool)_showMapItemIdentifier;

@end
