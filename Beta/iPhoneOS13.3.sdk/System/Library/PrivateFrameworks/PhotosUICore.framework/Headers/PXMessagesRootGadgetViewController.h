/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetUIViewController.h>

@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController

{
    PXMessagesGadgetDataSourceManager *_messagesDataSourceManager;
}

@property (nonatomic) double recentPhotosHeight;
@property (nonatomic, readonly) PXMessagesGadgetDataSourceManager *messagesDataSourceManager;

+ (Class)gadgetSpecClass;

- (void)viewDidLoad;
- (id)initWithGadgetDataSourceManager:(id)arg1;
- (void)prepareForPresentationStyle:(long long)arg1;

@end
