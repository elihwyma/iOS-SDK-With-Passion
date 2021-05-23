/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSDate, NSDictionary, NSLayoutConstraint, NSMutableDictionary, NSTimeZone, UIButton, UIColor, UIImageView, UILabel, UITapGestureRecognizer, UITextView, UIView;

@interface EKUIInviteesViewTimeSlotCell : UITableViewCell

{
    _Bool _checked;
    _Bool _searchInProgress;
    _Bool _updateFontBasedConstraints;
    _Bool _updateTimeText;
    _Bool _updateParticipantsText;
    _Bool _showAllParticipants;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    CDUnknownBlockType _showAllConflictedParticipantsTapped;
    NSDictionary *_andMoreStringCache;
    NSArray *_proposedBy;
    UILabel *_labelForTextSizeTesting;
    UITextView *_textViewForTextSizeTesting;
    UILabel *_topTimeLabel;
    UILabel *_bottomTimeLabel;
    UILabel *_timeZoneTimeLabel;
    UILabel *_proposedByLabel;
    UIView *_andMoreDebugOverlay;
    UITextView *_participantsTextView;
    UIImageView *_checkmarkImageView;
    UIButton *_showPreviewButton;
    NSArray *_persistentConstraints;
    NSMutableDictionary *_colorToBusyImageAttributedString;
    NSLayoutConstraint *_topTimeLabelToTopContentViewConstraint;
    NSLayoutConstraint *_bottomTimeLabelToTopTimeLabelConstraint;
    NSLayoutConstraint *_timeZoneTimeLabelToBottomTimeLabelConstraint;
    NSLayoutConstraint *_proposedTimeLabelToBottomTimeLabelConstraint;
    NSLayoutConstraint *_participantsViewToBottomTimeLabelConstraint;
    NSLayoutConstraint *_participantsViewToContentViewConstraint;
    NSLayoutConstraint *_topTimeLabelHeightConstraint;
    NSLayoutConstraint *_bottomTimeLabelHeightConstraint;
    NSLayoutConstraint *_timeZoneTimeLabelHeightConstraint;
    NSLayoutConstraint *_proposedByMinHeightConstraint;
    NSLayoutConstraint *_proposedByMaxHeightConstraint;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSArray *_busyParticipants;
    UITapGestureRecognizer *_tappedMoreRecognizer;
    struct CGRect _andMoreBoundingRect;
}

@property (retain, nonatomic) UILabel *labelForTextSizeTesting;
@property (retain, nonatomic) UITextView *textViewForTextSizeTesting;
@property (retain, nonatomic) UILabel *topTimeLabel;
@property (retain, nonatomic) UILabel *bottomTimeLabel;
@property (retain, nonatomic) UILabel *timeZoneTimeLabel;
@property (retain, nonatomic) UILabel *proposedByLabel;
@property (retain, nonatomic) UIView *andMoreDebugOverlay;
@property (retain, nonatomic) UITextView *participantsTextView;
@property (retain, nonatomic) UIImageView *checkmarkImageView;
@property (retain, nonatomic) UIButton *showPreviewButton;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (retain, nonatomic) NSMutableDictionary *colorToBusyImageAttributedString;
@property (retain, nonatomic) NSLayoutConstraint *topTimeLabelToTopContentViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomTimeLabelToTopTimeLabelConstraint;
@property (retain, nonatomic) NSLayoutConstraint *timeZoneTimeLabelToBottomTimeLabelConstraint;
@property (retain, nonatomic) NSLayoutConstraint *proposedTimeLabelToBottomTimeLabelConstraint;
@property (retain, nonatomic) NSLayoutConstraint *participantsViewToBottomTimeLabelConstraint;
@property (retain, nonatomic) NSLayoutConstraint *participantsViewToContentViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topTimeLabelHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomTimeLabelHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *timeZoneTimeLabelHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *proposedByMinHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *proposedByMaxHeightConstraint;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) _Bool updateFontBasedConstraints;
@property (nonatomic) _Bool updateTimeText;
@property (nonatomic) _Bool updateParticipantsText;
@property (nonatomic) _Bool showAllParticipants;
@property (retain, nonatomic) NSArray *busyParticipants;
@property (retain, nonatomic) UITapGestureRecognizer *tappedMoreRecognizer;
@property (nonatomic) struct CGRect andMoreBoundingRect;
@property (copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime;
@property (copy, nonatomic) CDUnknownBlockType showAllConflictedParticipantsTapped;
@property (nonatomic) _Bool checked;
@property (nonatomic, readonly) UIColor *participantsTextColor;
@property (nonatomic, readonly) UIColor *timeTextColor;
@property (retain, nonatomic) NSDictionary *andMoreStringCache;
@property (retain, nonatomic) NSArray *proposedBy;
@property (nonatomic) _Bool searchInProgress;

+ (double)_leftBuffer;
+ (void)_setRequiredHuggingAndCompression:(id)arg1;
+ (id)_generateParticipantTextView;
+ (double)_rightBuffer;
+ (id)_proposedByFont;
+ (id)_timeLabelFont;
+ (id)_participantsTextViewFont;
+ (id)_interParticipantSpacing;
+ (id)_andMoreLeftSpacing;
+ (id)_generateAndMoreStringWithCount:(unsigned long long)arg1 attributes:(id)arg2;
+ (_Bool)_layoutManagerReportsExcessLines:(id)arg1;
+ (id)_replaceSpacesWithNonBreakingSpaces:(id)arg1;
+ (id)_nonBreakingSpace;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)_preferredMaxLayoutWidth;
- (void)updateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 busyParticipants:(id)arg4 showAllParticipants:(_Bool)arg5 checked:(_Bool)arg6;
- (void)_showPreviewButtonTapped:(id)arg1;
- (void)_andMoreTapped:(id)arg1;
- (void)_resetFonts;
- (void)_resetPreferredMaxLayoutWidths;
- (_Bool)_shouldDisplayTimeZone;
- (void)_resetTimeTextIfNeeded;
- (void)_resetParticipantsTextIfNeeded;
- (_Bool)_textWillFit:(id)arg1;
- (_Bool)_everyoneCanAttend;
- (id)_generateStringForAllParticipants:(id)arg1;
- (id)_generateStringForSomeParticipantsAndStampMoreBoundingRect:(id)arg1;
- (id)_textForParticipant:(id)arg1 color:(id)arg2;
- (id)_busyImageAttributedStringForColor:(id)arg1;

@end
