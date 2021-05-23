/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXWidgetBarSpec, PXWidgetSpec;

@interface PXWidgetCompositionSpec : NSObject

{
    PXWidgetSpec *_widgetSpec;
    long long _maximumNumberOfColumns;
    PXWidgetBarSpec *_footerSpec;
    long long _disclosureLocation;
    PXWidgetBarSpec *__defaultHeaderSpec;
    PXWidgetBarSpec *__headerSpecForFlushedContent;
}

@property (nonatomic, readonly) PXWidgetBarSpec *_defaultHeaderSpec;
@property (nonatomic, readonly) PXWidgetBarSpec *_headerSpecForFlushedContent;
@property (nonatomic, readonly) PXWidgetSpec *widgetSpec;
@property (nonatomic, readonly) long long maximumNumberOfColumns;
@property (nonatomic, readonly) PXWidgetBarSpec *footerSpec;
@property (nonatomic, readonly) long long disclosureLocation;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 widgetSpec:(id)arg2;
- (id)headerSpecForWidgetContentLayoutStyle:(long long)arg1;

@end
