/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIActivity.h>

@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity : UIActivity

{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _willPerformActivityBlock;
    ICNote *_note;
    UIWindow *_displayWindow;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType willPerformActivityBlock;
@property (retain, nonatomic) ICNote *note;
@property (weak, nonatomic) UIWindow *displayWindow;

+ (long long)activityCategory;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
