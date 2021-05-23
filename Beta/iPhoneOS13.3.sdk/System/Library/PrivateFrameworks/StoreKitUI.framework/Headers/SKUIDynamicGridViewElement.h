/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIGridViewElement.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElement : SKUIGridViewElement

{
    _Bool _hasValidTemplateDefinitionMap;
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;
    long long _minimumEntityCountForSections;
}

@property (nonatomic, readonly) _Bool hasSectionHeaders;
@property (nonatomic, readonly, getter=isMalformed) _Bool malformed;
@property (nonatomic, readonly) long long minimumEntityCountForSections;

- (_Bool)allowsMultipleSelectionDuringEditing;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;
- (_Bool)isDynamicContainer;
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;
- (id)_templateDefinitionTypeToModeValueMap;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;

@end
