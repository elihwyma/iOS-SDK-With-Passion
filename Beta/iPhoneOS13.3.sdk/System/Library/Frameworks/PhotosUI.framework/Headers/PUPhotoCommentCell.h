/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class PLCloudSharedComment, UILabel, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoCommentCell : UITableViewCell

{
    _Bool _usesCompactSeparators;
    UITextView *_commentContentTextView;
    UILabel *_commentBylineLabel;
    UIView *_styledSeparatorView;
    PLCloudSharedComment *_comment;
}

@property (retain, nonatomic, readonly) UITextView *commentContentTextView;
@property (retain, nonatomic, readonly) UILabel *commentBylineLabel;
@property (retain, nonatomic, readonly) UIView *styledSeparatorView;
@property (copy, nonatomic) PLCloudSharedComment *comment;
@property (nonatomic) _Bool usesCompactSeparators;

+ (Class)layerClass;
+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(_Bool)arg2;
+ (id)_attributionStringForComment:(id)arg1;
+ (id)_commentStringForComment:(id)arg1;
+ (double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)delete:(id)arg1;
- (void)_updateContent;

@end
