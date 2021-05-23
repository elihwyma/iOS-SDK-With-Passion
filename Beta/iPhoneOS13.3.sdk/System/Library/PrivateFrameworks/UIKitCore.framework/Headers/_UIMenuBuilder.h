/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIMenuSystem;

__attribute__((visibility("hidden")))
@interface _UIMenuBuilder : NSObject <Swift>

{
    CDStruct_5ddd6656 _analysis;
    NSArray *_keyCommandsCache;
    UIMenuSystem *_system;
    unsigned long long __changeCount;
    unsigned long long __actualChangeCount;
}

@property (weak, nonatomic) UIMenuSystem *system;
@property (nonatomic, readonly) unsigned long long _changeCount;
@property (nonatomic, readonly) unsigned long long _actualChangeCount;
@property (nonatomic, readonly) NSArray *_keyCommands;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_patch:(id)arg1;
- (id)initWithSystem:(id)arg1 analysis:(CDStruct_5ddd6656)arg2;
- (id)menuForIdentifier:(id)arg1;
- (void)_recacheCommandsIfNeeded;
- (void)_replaceMenu:(id)arg1 withMenu:(id)arg2;
- (void)_setNeedsRecacheCommands;
- (void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;
- (void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(CDUnknownBlockType)arg3;
- (id)actionForIdentifier:(id)arg1;
- (id)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(CDUnknownBlockType)arg2;
- (void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;
- (void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;
- (void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;
- (void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;
- (void)removeMenuForIdentifier:(id)arg1;
- (id)initWithRootMenu:(id)arg1;
- (id)_menuForMenu:(id)arg1;
- (id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2;
- (id)_firstValidMenuWithinIdentifiers:(id)arg1;
- (_Bool)_isInternallyConsistent;
- (id)_internalDiffForDiffv1:(id)arg1;
- (void)_patchInternalDiff:(id)arg1;

@end
