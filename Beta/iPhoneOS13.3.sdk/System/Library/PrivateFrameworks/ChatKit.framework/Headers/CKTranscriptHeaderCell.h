/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell

{
    UIView *_loadingIndicator;
}

@property (retain, nonatomic) UIView *loadingIndicator;

+ (double)defaultCellHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)startAnimatingActivityIndicator;

@end
