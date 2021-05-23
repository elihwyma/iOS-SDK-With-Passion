/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray, NSDictionary, NSString, PXHorizontalCollectionGadget;

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider

{
    PXHorizontalCollectionGadget *_horizontalGadget;
    _Bool _hasLoaded;
    Class _horizontalCollectionGadgetClass;
    NSArray *_contentGadgetProviders;
    NSString *_title;
    unsigned long long _gadgetType;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpanForTraitCollection;
}

@property (nonatomic, readonly) NSArray *contentGadgetProviders;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic) unsigned long long gadgetType;
@property (nonatomic) long long defaultColumnSpan;
@property (copy, nonatomic) NSDictionary *columnSpanForTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadDataForPriority;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)resetPriorityDate;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1;
- (void)invalidateGadgets;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;
- (void)_updateHorizontalGadget;

@end
