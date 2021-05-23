/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIActivity.h>

@protocol ICPaperStyleUIActivityDelegate;

@interface ICPaperStyleUIActivity : UIActivity

{
    id <ICPaperStyleUIActivityDelegate> _delegate;
}

@property (weak, nonatomic) id <ICPaperStyleUIActivityDelegate> delegate;

- (id)activityType;
- (id)initWithDelegate:(id)arg1;
- (id)_systemImageName;
- (long long)activityCategory;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
