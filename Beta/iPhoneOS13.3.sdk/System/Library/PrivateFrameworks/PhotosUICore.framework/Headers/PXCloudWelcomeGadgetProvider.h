/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray, NSDate;

@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider

{
    unsigned long long _sourceType;
    id <PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
    NSArray *_contentGadgets;
}

@property (copy, nonatomic) NSArray *contentGadgets;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (weak, nonatomic) id <PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;
@property (nonatomic, readonly) NSDate *priorityDate;
@property (nonatomic, readonly) long long defaultPriority;
@property (nonatomic, readonly) long long priorityType;
@property (nonatomic, readonly) unsigned long long gadgetType;

+ (id)new;

- (id)init;
- (id)initWithSourceType:(unsigned long long)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (void)resetPriorityDate;

@end
