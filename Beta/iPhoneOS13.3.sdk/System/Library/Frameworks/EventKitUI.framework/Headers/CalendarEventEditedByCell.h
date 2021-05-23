/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;

@protocol EKCellShortener;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell

{
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    unsigned int _valuePlaceholder:2;
    id <EKCellShortener> _shortener;
}

@property (retain, nonatomic, readonly) UILabel *textLabel2;
@property (retain, nonatomic, readonly) UILabel *detailTextLabel2;
@property (weak, nonatomic) id <EKCellShortener> shortener;

- (void)layoutSubviews;
- (void)_checkValueWidth;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;
- (_Bool)detailTextIsPlaceholder;
- (_Bool)detailText2IsPlaceholder;
- (void)setDetailTextIsPlaceholder:(_Bool)arg1;
- (void)setDetailText2IsPlaceholder:(_Bool)arg1;

@end
