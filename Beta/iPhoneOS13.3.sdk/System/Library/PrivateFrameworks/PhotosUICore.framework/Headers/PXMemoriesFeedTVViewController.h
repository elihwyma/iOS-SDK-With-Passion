/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXMemoriesFeedUIViewController, PXMemoriesSpecManager, UIScrollView;

@interface PXMemoriesFeedTVViewController : UIViewController <Swift>

{
    PXMemoriesSpecManager *_specManager;
    PXMemoriesFeedUIViewController *_memoriesFeedController;
}

@property (nonatomic, readonly) PXMemoriesSpecManager *specManager;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (retain, nonatomic) PXMemoriesFeedUIViewController *memoriesFeedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_specDidChange:(id)arg1;

@end
