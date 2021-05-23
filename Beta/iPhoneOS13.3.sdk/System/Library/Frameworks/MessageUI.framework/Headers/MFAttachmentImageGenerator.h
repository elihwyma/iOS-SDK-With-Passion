/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView

{
    struct CGSize _textSize;
    NSString *_displayString;
    UIImage *_image;
    double _maxImageHeight;
}

+ (double)defaultHeight;
+ (id)pngDataForAttachment:(id)arg1;
+ (id)imageForAttachment:(id)arg1;
+ (struct CGRect)imageRectForAttachment:(id)arg1;

- (id)image;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithAttachment:(id)arg1;
- (struct CGRect)imageRect;
- (id)pngData;

@end
