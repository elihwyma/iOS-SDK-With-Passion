/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray;

@interface PXBasicGadgetDataSourceManager : PXGadgetDataSourceManager

{
    NSArray *_providers;
}

@property (copy, nonatomic) NSArray *providers;

- (id)gadgetProviders;
- (id)initWithProviders:(id)arg1;

@end
