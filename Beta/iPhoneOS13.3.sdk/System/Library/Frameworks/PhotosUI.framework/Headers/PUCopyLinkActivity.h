/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

@class NSString;

@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyLinkActivity : PXActivity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXActivityItemSourceController> itemSourceController;

+ (long long)activityCategory;
+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
