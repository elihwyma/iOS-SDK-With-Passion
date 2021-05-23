/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppMenuBarDocument, NSArray, NSString, SKUIMenuItemViewElement;

@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarViewElementConfiguration : NSObject

{
    IKAppMenuBarDocument *_menuBarDocument;
    long long _menuBarStyle;
    NSArray *_menuItemViewElements;
    _Bool _scrollEnabled;
    SKUIMenuItemViewElement *_selectedMenuItemViewElement;
    _Bool _needsReload;
    id <SKUIMenuBarViewElementConfigurationDelegate> _delegate;
    id <_SKUIMenuBarViewElementConfigurationReloadDelegate> _reloadDelegate;
}

@property (nonatomic, getter=_needsReload, setter=_setNeedsReload:) _Bool needsReload;
@property (weak, nonatomic, getter=_reloadDelegate, setter=_setReloadDelegate:) id <_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate;
@property (weak, nonatomic) id <SKUIMenuBarViewElementConfigurationDelegate> delegate;
@property (nonatomic, readonly) long long menuBarStyle;
@property (nonatomic, readonly) unsigned long long numberOfMenuItems;
@property (nonatomic, readonly) _Bool scrollEnabled;
@property (nonatomic, readonly) SKUIMenuItemViewElement *selectedMenuItemViewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(_Bool)arg3;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (void)_ensureDataLoaded;
- (id)_initWithMenuBarDocument:(id)arg1;
- (id)documentForMenuItemAtIndex:(unsigned long long)arg1;
- (id)documentOptionsForMenuItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMenuItemViewElement:(id)arg1;
- (void)contentWillAppearForMenuItemAtIndex:(unsigned long long)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3;
- (void)_reloadWithMenuBarStyle:(long long)arg1 menuItemViewElements:(id)arg2 scrollEnabled:(_Bool)arg3;

@end
