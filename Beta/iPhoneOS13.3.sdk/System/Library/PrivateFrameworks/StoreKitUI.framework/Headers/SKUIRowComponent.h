/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, SKUIRowViewElement, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIRowComponent : SKUIPageComponent

{
    UIColor *_backgroundColor;
    NSArray *_childComponents;
    NSArray *_columnWidths;
    long long _missingItemCount;
    long long _numberOfColumns;
    _Bool _shouldAutoFlow;
}

@property (nonatomic, readonly) SKUIRowViewElement *viewElement;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSArray *childComponents;
@property (nonatomic, readonly) NSArray *columnWidths;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) _Bool shouldAutoFlow;

- (id)description;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isMissingItemData;
- (id)metricsElementName;
- (id)_updateWithMissingItems:(id)arg1;
- (id)_childComponentWithContext:(id)arg1;
- (_Bool)_isChildMissingItemData:(id)arg1;

@end
