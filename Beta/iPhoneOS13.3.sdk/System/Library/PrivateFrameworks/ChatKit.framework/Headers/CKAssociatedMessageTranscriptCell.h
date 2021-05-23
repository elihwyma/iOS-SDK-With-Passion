/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptMessageContentCell.h>

@class UIView;

@protocol CKAssociatedMessageTranscriptCellDelegate;

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell

{
    id <CKAssociatedMessageTranscriptCellDelegate> _delegate;
    UIView *_associatedItemView;
    double _cumulativeAssociatedOffset;
    struct CGSize _size;
    struct CGSize _parentSize;
    struct IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
}

@property (weak, nonatomic) id <CKAssociatedMessageTranscriptCellDelegate> delegate;
@property (retain, nonatomic) UIView *associatedItemView;
@property (nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGSize parentSize;
@property (nonatomic) double cumulativeAssociatedOffset;

- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hidesCheckmark;
- (_Bool)failureButtonAdjustsContentAlignmentRect;
- (struct CGRect)associatedViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;

@end
