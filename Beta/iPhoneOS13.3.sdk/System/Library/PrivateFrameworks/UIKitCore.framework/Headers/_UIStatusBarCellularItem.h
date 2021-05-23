/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarImageView, _UIStatusBarStringView;

@protocol _UIStatusBarCellularItemTypeStringProvider;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularItem : _UIStatusBarItem

{
    _Bool _showsDisabledSignalBars;
    _Bool _marqueesServiceName;
    id <_UIStatusBarCellularItemTypeStringProvider> _typeStringProvider;
    _UIStatusBarStringView *_serviceNameView;
    _UIStatusBarCellularSignalView *_signalView;
    _UIStatusBarStringView *_networkTypeView;
    _UIStatusBarImageView *_sosView;
    _UIStatusBarImageView *_warningView;
    _UIStatusBarImageView *_callForwardingView;
    _UIStatusBarStringView *_rawStringView;
}

@property (nonatomic, readonly) NSString *cellularDataEntryKey;
@property (retain, nonatomic) _UIStatusBarStringView *serviceNameView;
@property (retain, nonatomic) _UIStatusBarCellularSignalView *signalView;
@property (retain, nonatomic) _UIStatusBarStringView *networkTypeView;
@property (retain, nonatomic) _UIStatusBarImageView *sosView;
@property (retain, nonatomic) _UIStatusBarImageView *warningView;
@property (retain, nonatomic) _UIStatusBarImageView *callForwardingView;
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView;
@property (nonatomic) _Bool showsDisabledSignalBars;
@property (nonatomic) _Bool marqueesServiceName;
@property (weak, nonatomic) id <_UIStatusBarCellularItemTypeStringProvider> typeStringProvider;

+ (id)signalStrengthDisplayIdentifier;
+ (id)nameDisplayIdentifier;
+ (id)typeDisplayIdentifier;
+ (id)sosDisplayIdentifier;
+ (id)warningDisplayIdentifier;
+ (id)callForwardingDisplayIdentifier;
+ (id)rawDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (_Bool)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3;
- (id)_stringForCellularType:(long long)arg1;
- (void)_create_signalView;
- (void)_create_serviceNameView;
- (void)_create_networkTypeView;
- (void)_create_sosView;
- (void)_create_warningView;
- (void)_create_callForwardingView;
- (void)_create_rawStringView;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;

@end
