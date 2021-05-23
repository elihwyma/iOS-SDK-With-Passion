/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEditableSearchResultCell.h>

@class CKSearchAvatarSupplementryView, NSString, UIDateLabel, UIImageView, UILabel;

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell

{
    _Bool _suppressAvatars;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIDateLabel *_dateLabel;
    NSString *_identifier;
    CKSearchAvatarSupplementryView *_avatarView;
    struct UIEdgeInsets marginInsets;
}

@property (nonatomic) _Bool suppressAvatars;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CKSearchAvatarSupplementryView *avatarView;
@property (nonatomic, readonly) struct CGPoint avatarOffsetLTR;
@property (nonatomic, readonly) struct CGPoint avatarOffsetRTL;
@property (nonatomic, readonly) double editModeHorizontalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (void)_thumbnailGenerated:(id)arg1;

@end
