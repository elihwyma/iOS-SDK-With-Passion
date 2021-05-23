/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface ICBlockUIActivity : UIActivity

{
    CDUnknownBlockType _block;
    NSString *_title;
    UIImage *_image;
    NSString *_systemImageName;
    NSString *_customActivityType;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *systemImageName;
@property (retain, nonatomic) NSString *customActivityType;

- (id)activityType;
- (id)_systemImageName;
- (long long)activityCategory;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
