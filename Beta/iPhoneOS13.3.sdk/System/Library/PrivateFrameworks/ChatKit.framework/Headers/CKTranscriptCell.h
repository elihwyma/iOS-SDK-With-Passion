/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell

{
    _Bool _wantsDrawerLayout;
    BOOL _orientation;
    double _drawerPercentRevealed;
    double _associatedItemOffset;
}

@property (nonatomic) _Bool wantsDrawerLayout;
@property (nonatomic) BOOL orientation;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) double associatedItemOffset;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)performHide:(CDUnknownBlockType)arg1;
- (void)performReveal:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)configureForChatItem:(id)arg1;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performInsertion:(CDUnknownBlockType)arg1;

@end
