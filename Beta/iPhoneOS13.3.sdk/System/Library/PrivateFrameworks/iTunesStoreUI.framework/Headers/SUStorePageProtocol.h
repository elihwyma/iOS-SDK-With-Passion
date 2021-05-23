/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, SSURLRequestProperties;

@interface SUStorePageProtocol : NSObject

{
    NSArray *_allowedOrientations;
    NSString *_copyright;
    NSArray *_expectedClientIdentifiers;
    NSNumber *_focusedItemIdentifier;
    NSArray *_navigationButtons;
    NSArray *_navigationHistoryItems;
    NSArray *_navigationMenus;
    SSURLRequestProperties *_overlayBackgroundURLRequestProperties;
    NSString *_rootSectionIdentifier;
    _Bool _shouldDisplayInOverlay;
    _Bool _shouldExcludeFromNavigationHistory;
    _Bool _shouldReplaceRootViewController;
}

@property (retain, nonatomic) NSArray *allowedOrientations;
@property (retain, nonatomic) NSString *copyright;
@property (copy, nonatomic) NSArray *expectedClientIdentifiers;
@property (retain, nonatomic) NSNumber *focusedItemIdentifier;
@property (copy, nonatomic) NSArray *navigationButtons;
@property (retain, nonatomic) NSArray *navigationHistoryItems;
@property (copy, nonatomic) NSArray *navigationMenus;
@property (retain, nonatomic) SSURLRequestProperties *overlayBackgroundURLRequestProperties;
@property (retain, nonatomic) NSString *rootSectionIdentifier;
@property (nonatomic) _Bool shouldDisplayInOverlay;
@property (nonatomic) _Bool shouldExcludeFromNavigationHistory;
@property (nonatomic) _Bool shouldReplaceRootViewController;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initCommon;
- (id)navigationButtonForLocation:(id)arg1;
- (id)navigationMenuForLocation:(long long)arg1;
- (void)setValuesFromStorePageDictionary:(id)arg1;
- (id)overlayBackgroundURLRequest;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)_newNavigationHistoryItemsFromArray:(id)arg1;
- (id)_newNavigationMenusFromArray:(id)arg1;

@end
