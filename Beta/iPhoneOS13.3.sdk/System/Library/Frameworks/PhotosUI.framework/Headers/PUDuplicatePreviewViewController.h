/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, PUStackView;

__attribute__((visibility("hidden")))
@interface PUDuplicatePreviewViewController : UIViewController

{
    PUStackView *_stackView;
    NSArray *_assets;
    CDStruct_1b6d18a9 _stillImageTime;
}

@property (copy, nonatomic) NSArray *assets;
@property (nonatomic) CDStruct_1b6d18a9 stillImageTime;

- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 stillImageTime:(CDStruct_1b6d18a9)arg2;
- (void)_handleImageResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3;
- (void)_handleVideoResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3;

@end
