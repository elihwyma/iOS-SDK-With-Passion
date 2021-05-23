/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UIFocusRingManager : NSObject

{
    NSMutableDictionary *_focusRingStateForClient;
}

@property (retain, nonatomic) NSMutableDictionary *focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)manager;
+ (void)moveRingToFocusItem:(id)arg1;
+ (void)removeRingFromFocusItem:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1;
+ (void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2;
+ (Class)shapeLayerClassForClient:(id)arg1;

- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_removeActiveFocusLayersForClient:(id)arg1;
- (void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)_updateFocusLayerFrames;
- (id)activeFocusLayersForClient:(id)arg1;
- (id)activeFocusLayersToItemsForClient:(id)arg1;
- (id)_viewToAddFocusLayerForItem:(id)arg1;

@end
