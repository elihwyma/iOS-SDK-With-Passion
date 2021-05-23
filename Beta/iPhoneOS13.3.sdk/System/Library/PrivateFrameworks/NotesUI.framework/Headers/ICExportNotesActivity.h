/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIActivity.h>

@class NSArray, UIWindow;

@interface ICExportNotesActivity : UIActivity

{
    NSArray *_noteObjectIDs;
    UIWindow *_window;
}

@property (retain, nonatomic) NSArray *noteObjectIDs;
@property (retain, nonatomic) UIWindow *window;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithNotes:(id)arg1 forPresentingInWindow:(id)arg2;

@end
