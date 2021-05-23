/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UILabel.h>

@class ICMediaTime, ICMediaTimeFormatter;

@interface ICMediaTimeLabel : UILabel

{
    ICMediaTime *_mediaTimeValue;
    ICMediaTimeFormatter *_formatter;
}

@property (retain, nonatomic) ICMediaTimeFormatter *formatter;
@property (copy, nonatomic) ICMediaTime *mediaTimeValue;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
