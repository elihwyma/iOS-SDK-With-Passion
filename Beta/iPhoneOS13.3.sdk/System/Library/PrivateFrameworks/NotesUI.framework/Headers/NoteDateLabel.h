/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UILabel.h>

@class NSDate;

@interface NoteDateLabel : UILabel

{
    NSDate *_date;
}

- (void)setDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateDateLabel;

@end
