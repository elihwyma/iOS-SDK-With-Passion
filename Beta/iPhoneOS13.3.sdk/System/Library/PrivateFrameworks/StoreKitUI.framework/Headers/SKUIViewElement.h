/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKViewElement.h>

@class NSArray, NSMutableArray, NSSet, NSString;

@protocol IKEntityValueProviding, NSCopying, SKUIEntityProviding;

@interface SKUIViewElement : IKViewElement

{
    id <SKUIEntityProviding> _entityProvider;
    id <IKEntityValueProviding> _entityValueProvider;
    NSMutableArray *_flattenedChildren;
    _Bool _hasValidEntityProvider;
    long long _pinStyle;
    long long _pinGroup;
    id <IKEntityValueProviding> _explicitEntityValueProvider;
}

@property (copy, nonatomic, readonly) NSString *indexBarEntryID;
@property (nonatomic, readonly, getter=isDynamicContainer) _Bool dynamicContainer;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) id <SKUIEntityProviding> entityProvider;
@property (nonatomic, readonly) id <SKUIEntityProviding> explicitEntityProvider;
@property (retain, nonatomic) id <IKEntityValueProviding> entityValueProvider;
@property (retain, nonatomic) id <IKEntityValueProviding> explicitEntityValueProvider;
@property (nonatomic, readonly) NSSet *entityValueProperties;
@property (nonatomic, readonly) NSArray *flattenedChildren;
@property (retain, nonatomic, readonly) NSString *itmlID;
@property (nonatomic, readonly) long long pageComponentType;
@property (nonatomic, readonly) NSSet *personalizationLibraryItems;
@property (nonatomic, readonly) long long pinStyle;
@property (nonatomic, readonly) long long pinGroup;
@property (nonatomic, readonly) _Bool rendersWithParallax;
@property (nonatomic, readonly) _Bool rendersWithPerspective;
@property (nonatomic, readonly) id <NSCopying> uniquingMapKey;

- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstChildForElementType:(unsigned long long)arg1;
- (id)firstDescendentWithIndexBarEntryID:(id)arg1;
- (id)firstChildForElementName:(id)arg1;
- (void)entityValueProviderDidChange;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (id)persistenceKey;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (_Bool)isDescendentFromViewElement:(id)arg1;
- (_Bool)handlesBackgroundColorDirectly;
- (id)featureWithName:(id)arg1;
- (id)ancestorElementMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)_entityValueProviderDidChange;
- (_Bool)canMoveWithinCollection;
- (id)ancestorElementOfType:(unsigned long long)arg1;
- (_Bool)descendsFromElementWithType:(unsigned long long)arg1;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)expandableLabelElementForWidth:(double)arg1 context:(id)arg2;

@end
