/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoStreamAlbumTableViewCell : UITableViewCell

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detailText;

+ (double)cellHeight;
+ (double)labelXOriginForContentWidth:(double)arg1 labelWidth:(double)arg2 isRTL:(_Bool)arg3;
+ (double)labelHorizontalInset;

- (void)layoutSubviews;

@end
