/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUInternalImageQualityFeedbackActivity : PXActivity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)assets;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)feedbackImageQualityUIViewController:(id)arg1 didFinish:(_Bool)arg2;

@end
