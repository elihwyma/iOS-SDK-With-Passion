/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIActivity.h>

@class NSString, PUActivityItemSourceController, UIImage;

@protocol PUActivityDataSource;

@interface PUActivity : UIActivity

{
    struct {
        _Bool respondsToActivityViewControllerForActivity;
        _Bool respondsToActivityItemsForActivity;
    } _dataSourceFlags;
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
    PUActivityItemSourceController *_itemSourceController;
    id <PUActivityDataSource> _dataSource;
}

@property (weak, nonatomic) id <PUActivityDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) PUActivityItemSourceController *itemSourceController;

- (void)updateActivityViewControllerVisibleShareActions;
- (void)tearDownForCompletion;
- (id)createActivityBundleImageConfigurationForBundle:(id)arg1 imageNamed:(id)arg2 activityCategory:(long long)arg3;
- (id)pu_activityImageNamed:(id)arg1;
- (id)pu_activitySettingsImageNamed:(id)arg1;

@end
