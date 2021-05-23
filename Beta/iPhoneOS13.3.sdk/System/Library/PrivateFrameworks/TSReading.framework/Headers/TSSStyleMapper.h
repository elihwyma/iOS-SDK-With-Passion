/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TSKAddedToDocumentContext, TSSStylesheet, TSURetainedPointerKeyDictionary;

@interface TSSStyleMapper : NSObject

{
    TSSStylesheet *_targetStylesheet;
    TSSStylesheet *_targetThemeStylesheet;
    TSKAddedToDocumentContext *_dolcContext;
    TSURetainedPointerKeyDictionary *_styleMap;
    NSMutableArray *_mappingContext;
    _Bool _forceMatchStyle;
    _Bool _varyInThemeStylesheet;
}

@property (nonatomic, readonly) TSSStylesheet *targetStylesheet;
@property (nonatomic) _Bool forceMatchStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2;
- (id)pTargetParentForStyle:(id)arg1 withParentIdentifier:(id)arg2;
- (id)pCascadedFindExistingRootlessStyle:(id)arg1 propertyMap:(id)arg2;
- (id)createStyleForStyle:(id)arg1 withPropertyMap:(id)arg2;
- (id)mappedStyleForStyle:(id)arg1;
- (void)varyInThemeStylesheetForDurationOfBlock:(CDUnknownBlockType)arg1;
- (void)pushMappingContext:(id)arg1;
- (void)popMappingContext:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(_Bool)arg2;
- (void)varyInThemeStylesheetIf:(_Bool)arg1 forDurationOfBlock:(CDUnknownBlockType)arg2;
- (id)initWithTargetStylesheet:(id)arg1 newStyleDOLCContext:(id)arg2;

@end
