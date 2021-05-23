/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface MFAttachmentDragPreviewInfo : NSObject

{
    _Bool _isInlineImage;
    UIImage *_image;
    struct CGPoint _center;
    struct CGSize _displaySize;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool isInlineImage;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGSize displaySize;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)targetedDragPreviewInContainer:(id)arg1 centerOffset:(struct CGPoint)arg2;

@end
