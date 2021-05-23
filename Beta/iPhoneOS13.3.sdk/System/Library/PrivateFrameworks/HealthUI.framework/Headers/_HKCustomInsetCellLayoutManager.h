/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCellLayoutManager.h>

@interface _HKCustomInsetCellLayoutManager : UITableViewCellLayoutManager

{
    double _topInset;
    double _textLabelLeftInset;
}

@property (nonatomic) double topInset;
@property (nonatomic) double textLabelLeftInset;

+ (_Bool)requiresLegacyLayout;

- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(_Bool)arg3;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;

@end
