/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class CNCardGroupItem, NSArray;

@interface CNContactCell : UITableViewCell

{
    NSArray *_constantConstraints;
    NSArray *_variableConstraints;
    CNCardGroupItem *_cardGroupItem;
}

@property (nonatomic, readonly) NSArray *constantConstraints;
@property (nonatomic, readonly) NSArray *variableConstraints;
@property (nonatomic, readonly) double minCellHeight;
@property (retain, nonatomic) CNCardGroupItem *cardGroupItem;
@property (nonatomic) _Bool showSeparator;
@property (nonatomic, readonly) _Bool hasGapBetweenSeparatorAndTrailingEdge;

- (void)dealloc;
- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)shouldPerformDefaultAction;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)performDefaultAction;
- (_Bool)shouldPerformAccessoryAction;
- (void)performAccessoryAction;

@end
