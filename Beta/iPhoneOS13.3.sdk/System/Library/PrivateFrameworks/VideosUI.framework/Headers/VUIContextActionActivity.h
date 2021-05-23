/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIActivity.h>

@class IKViewElement, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VUIContextActionActivity : UIActivity

{
    IKViewElement *_viewElement;
    NSString *_activityTypeName;
    NSString *_title;
    UIImage *_resourceImage;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) NSString *activityTypeName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *resourceImage;

+ (long long)activityCategory;
+ (id)configureViewElement:(id)arg1;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;

@end
