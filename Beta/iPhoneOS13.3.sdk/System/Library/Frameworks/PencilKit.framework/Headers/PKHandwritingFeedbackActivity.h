/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface PKHandwritingFeedbackActivity : UIActivity

{
    CDUnknownBlockType _block;
    NSString *_title;
    UIImage *_image;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;

@end
