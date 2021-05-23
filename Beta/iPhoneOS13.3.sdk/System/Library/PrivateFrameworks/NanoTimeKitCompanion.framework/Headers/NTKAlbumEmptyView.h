/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSString, UIImageView, UILabel;

@interface NTKAlbumEmptyView : UIView

{
    CLKDevice *_device;
    UIImageView *_iconImageView;
    UILabel *_headerLabel;
    NSString *_headerLabelText;
    UILabel *_bodyLabel;
    NSString *_bodyLabelText;
}

@property (retain, nonatomic) NSString *headerLabelText;
@property (retain, nonatomic) NSString *bodyLabelText;

- (void)layoutSubviews;
- (id)initForDevice:(id)arg1;

@end
