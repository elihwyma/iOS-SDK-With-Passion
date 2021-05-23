/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@protocol PXActivityActionDelegate, PXActivityDataSource, PXActivityItemSourceController;

@interface PXActivity : UIActivity

{
    struct {
        _Bool respondsToActivityViewControllerForActivity;
        _Bool respondsToActivityItemsForActivity;
    } _dataSourceFlags;
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
    NSString *_internalActivityType;
    id <PXActivityItemSourceController> _itemSourceController;
    NSString *_actionTitle;
    NSString *_actionType;
    NSString *_systemImageName;
    CDUnknownBlockType _performActivityActionHandler;
    CDUnknownBlockType _canPerformActivityActionHandler;
    id <PXActivityActionDelegate> _actionDelegate;
    id <PXActivityDataSource> _dataSource;
}

@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) CDUnknownBlockType performActivityActionHandler;
@property (copy, nonatomic) CDUnknownBlockType canPerformActivityActionHandler;
@property (weak, nonatomic) id <PXActivityActionDelegate> actionDelegate;
@property (weak, nonatomic) id <PXActivityDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXActivityItemSourceController> itemSourceController;

+ (id)_destructiveActivities;
+ (id)activityWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (id)initWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4;
- (id)px_activityImageNamed:(id)arg1;
- (id)px_activitySettingsImageNamed:(id)arg1;
- (void)updateActivityViewControllerVisibleShareActions;
- (void)tearDownForCompletion;
- (id)createActivityBundleImageConfigurationForBundle:(id)arg1 imageNamed:(id)arg2 activityCategory:(long long)arg3;

@end
