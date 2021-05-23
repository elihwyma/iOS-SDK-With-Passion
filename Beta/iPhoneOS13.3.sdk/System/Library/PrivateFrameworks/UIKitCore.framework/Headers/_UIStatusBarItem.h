/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, _UIStatusBar, _UIStatusBarIdentifier;

@interface _UIStatusBarItem : NSObject

{
    _Bool _needsUpdate;
    _UIStatusBarIdentifier *_identifier;
    NSMutableDictionary *_displayItems;
    _UIStatusBar *_statusBar;
}

@property (retain, nonatomic) NSMutableDictionary *displayItems;
@property (weak, readonly) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _UIStatusBarIdentifier *identifier;
@property (nonatomic, readonly) NSSet *dependentEntryKeys;
@property (nonatomic, readonly) _Bool needsUpdate;

+ (id)identifier;
+ (id)displayItemIdentifierFromString:(id)arg1;
+ (id)defaultDisplayIdentifier;
+ (id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2;
+ (id)itemIdentifierFromString:(id)arg1;
+ (Class)itemClassForIdentifier:(id)arg1;
+ (id)itemIdentifierForDisplayItemIdentifier:(id)arg1;
+ (id)createItemForIdentifier:(id)arg1 statusBar:(id)arg2;

- (id)description;
- (void)setNeedsUpdate;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)displayItemForIdentifier:(id)arg1;
- (id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2;

@end
