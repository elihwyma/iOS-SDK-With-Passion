/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIDropInteraction, UIImage, UIImageView;

@protocol HUWallpaperThumbnailCellDelegate;

@interface HUWallpaperThumbnailCell : UITableViewCell

{
    long long _contentMode;
    id <HUWallpaperThumbnailCellDelegate> _delegate;
    UIImageView *_imageThumbnailView;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    UIDropInteraction *_dropInteraction;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) UIImageView *imageThumbnailView;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) id <HUWallpaperThumbnailCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;

@end
