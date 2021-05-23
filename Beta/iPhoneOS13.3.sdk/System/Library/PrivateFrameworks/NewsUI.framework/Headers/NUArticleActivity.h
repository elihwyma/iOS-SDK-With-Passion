/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIActivity.h>

@class NSArray, NSString, UIImage;

@interface NUArticleActivity : UIActivity

{
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    CDUnknownBlockType _performBlock;
    NSArray *_activityItems;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType performBlock;
@property (retain, nonatomic) NSArray *activityItems;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 performBlock:(CDUnknownBlockType)arg4;

@end
