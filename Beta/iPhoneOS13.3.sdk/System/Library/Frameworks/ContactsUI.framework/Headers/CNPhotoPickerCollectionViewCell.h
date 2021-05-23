/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, NSUUID, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell

{
    _Bool _displaySelection;
    unsigned long long _cellStyle;
    NSUUID *_displaySessionUUID;
    CAShapeLayer *_selectionLayer;
    UILabel *_captionLabel;
    UIView *_containerView;
    UIView *_containerContentView;
    CAShapeLayer *_clippingLayer;
}

@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) UILabel *captionLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerContentView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (nonatomic) _Bool displaySelection;
@property (nonatomic) unsigned long long cellStyle;
@property (retain, nonatomic) NSUUID *displaySessionUUID;

+ (id)cellIdentifier;
+ (struct CGPath *)containerClippingPathForBounds:(struct CGRect)arg1 forCellStyle:(unsigned long long)arg2;
+ (struct CGPath *)selectionPathInBounds:(struct CGRect)arg1 forCellStyle:(unsigned long long)arg2;
+ (double)cornerRadiusForBounds:(struct CGRect)arg1 forCellStyle:(unsigned long long)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)updateWithView:(id)arg1 animation:(unsigned long long)arg2;
- (void)updateWithCaption:(id)arg1;
- (void)updateCaptionFrame;
- (void)clearContainerViewAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
