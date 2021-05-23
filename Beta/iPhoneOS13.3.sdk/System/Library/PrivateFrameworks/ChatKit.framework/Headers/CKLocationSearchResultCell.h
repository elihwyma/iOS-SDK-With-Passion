/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEditableSearchResultCell.h>

@class CKSpotlightQueryResult, NSString, UIImageView, UILabel, UIVisualEffectView;

@interface CKLocationSearchResultCell : CKEditableSearchResultCell

{
    UIImageView *_imageView;
    UILabel *_placeLabel;
    UIVisualEffectView *_blurEffectView;
    CKSpotlightQueryResult *_result;
    NSString *_searchText;
    unsigned long long _mode;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *placeLabel;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) CKSpotlightQueryResult *result;
@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (id)reuseIdentifier;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (void)_thumbnailGenerated:(id)arg1;
- (void)_configurePlaceLabelWithResult:(id)arg1 searchText:(id)arg2;

@end
