/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAttributeValueView, NSString, UIView;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <Swift>

{
    CDUnknownBlockType discardableContentHandler;
    UIView *_attributeView;
}

@property (retain, nonatomic) UIView *attributeView;
@property (nonatomic, readonly) AVTAttributeValueView *valueView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)discardContent;

@end
