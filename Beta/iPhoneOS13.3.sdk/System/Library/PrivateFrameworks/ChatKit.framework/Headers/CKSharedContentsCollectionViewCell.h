/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSharedAssetCollectionViewCell.h>

@class NSString, UIImage, UIImageView, UITapGestureRecognizer;

@protocol CKSharedContentsCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell

{
    _Bool _editing;
    UIImage *_previewImage;
    UIImageView *_checkmarkView;
    id <CKSharedContentsCollectionViewCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImage *previewImage;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (weak, nonatomic) id <CKSharedContentsCollectionViewCellDelegate> delegate;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)more:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)setupTapGestureRecognizer;
- (void)toggleCheckmarkViewWithEnabled:(_Bool)arg1;

@end
