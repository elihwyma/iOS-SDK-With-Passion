/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class EKEvent, EKEventDetailsHighlightControl, EKStructuredLocation, UIButton, UIView;

@protocol EKEventDetailPredictedLocationCellDelegate;

@interface EKEventDetailPredictedLocationCell : UITableViewCell

{
    EKEvent *_event;
    EKStructuredLocation *_location;
    EKEventDetailsHighlightControl *_titleControl;
    UIButton *_dismissButton;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    _Bool _showsTopSeparator;
    id <EKEventDetailPredictedLocationCellDelegate> _delegate;
}

@property (weak) id <EKEventDetailPredictedLocationCellDelegate> delegate;
@property (nonatomic) _Bool showsTopSeparator;
@property (nonatomic, readonly) UIView *acceptView;
@property (nonatomic, readonly) UIView *rejectView;

+ (id)_separatorColor;

- (id)init;
- (void)setEvent:(id)arg1;
- (id)initEditable:(_Bool)arg1;
- (void)confirmLocationTapped:(id)arg1;
- (void)rejectLocationTapped:(id)arg1;
- (void)_disambiguateIfNeeded;
- (void)_setEventDate:(id)arg1;

@end
