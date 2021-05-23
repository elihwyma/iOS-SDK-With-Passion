/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSArray.h>

@class AXElement, NSHashTable, NSString;

@protocol AXElementGroupGenerator;

@interface AXElementGroup : NSArray

{
    NSArray *_elementStore;
    _Bool _rootGroup;
    id <AXElementGroupGenerator> _generator;
    unsigned long long _groupTraits;
    unsigned long long _userDefinedScanningBehaviorTraits;
    NSHashTable *_groupObservers;
    AXElementGroup *_parentGroup;
    AXElement *_elementCommunity;
    NSString *_label;
    NSString *_identifier;
}

@property (weak, nonatomic) id <AXElementGroupGenerator> generator;
@property (retain, nonatomic) NSHashTable *groupObservers;
@property (nonatomic) unsigned long long groupTraits;
@property (nonatomic, getter=isRootGroup) _Bool rootGroup;
@property (retain, nonatomic) AXElement *elementCommunity;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool canBeGroupedWithOtherGroupables;
@property (nonatomic, readonly) _Bool canBeReplacedByChildren;
@property (nonatomic, readonly) _Bool allowsChangingExistingGroupingOfContents;
@property (nonatomic, readonly) _Bool shouldBeUngrouped;
@property (nonatomic, readonly) _Bool allowsVisualGroupingOfChildren;
@property (nonatomic, readonly) unsigned long long numberOfElements;
@property (nonatomic) AXElementGroup *parentGroup;
@property (nonatomic) unsigned long long userDefinedScanningBehaviorTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect frame;

+ (id)groupWithElements:(id)arg1 label:(id)arg2;
+ (id)groupWithElements:(id)arg1;
+ (id)groupWithGenerator:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)firstChild;
- (_Bool)isGroup;
- (id)lastChild;
- (_Bool)isKeyboardContainer;
- (id)highestAncestorGroup;
- (id)keyboardContainer;
- (_Bool)isKeyboardRow;
- (id)firstChildPassingTest:(CDUnknownBlockType)arg1;
- (id)descendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)firstDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)nextSiblingOfChild:(id)arg1 didWrap:(_Bool *)arg2;
- (id)previousSiblingOfChild:(id)arg1 didWrap:(_Bool *)arg2;
- (id)groupByRemovingGroupable:(id)arg1;
- (id)initWithElements:(id)arg1 label:(id)arg2;
- (id)initWithGenerator:(id)arg1;
- (void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3;
- (void)unregisterAllGroupObservers;
- (void)_transferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1;
- (void)_generateGroupsIfNeeded;
- (id)_siblingOfChild:(id)arg1 inDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;
- (void)enumerateLeafDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (id)ancestorPassingTest:(CDUnknownBlockType)arg1;
- (id)descendantWithNativeFocus;
- (id)_leafAXElementWithPosition:(long long)arg1;
- (id)debugFullDescription;
- (id)_debugDescriptionForTraits;
- (id)_debugDescriptionForScanningBehaviorTraits;
- (id)_debugFullDescriptionWithIndent:(id)arg1;
- (id)groupByPrependingGroupable:(id)arg1;
- (id)groupByAppendingGroupable:(id)arg1;
- (id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2;
- (id)firstChildMatchingItem:(id)arg1;
- (id)firstDescendantMatchingItem:(id)arg1;
- (id)firstLeafDescendant;
- (id)keyboardContainerRows;
- (id)keyboardRow;
- (_Bool)containsNativeFocusElement;
- (id)leftMostLeafAXElement;
- (id)rightMostLeafAXElement;
- (id)topMostLeafAXElement;
- (id)bottomMostLeafAXElement;
- (void)registerGroupObserver:(id)arg1;
- (void)unregisterGroupObserver:(id)arg1;
- (id)_debugBriefDescription;

@end
