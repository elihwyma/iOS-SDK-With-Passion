/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICTrackedParagraph, NSString, UIImage, UIImageView;

@interface ICTrackedParagraphImageInfo : NSObject

{
    _Bool _estimated;
    ICTrackedParagraph *_trackedParagraph;
    NSString *_uuid;
    struct UIImage *_image;
    struct UIImageView *_imageViewIfExists;
    struct CGRect _boundingRect;
    struct CGRect _rect;
}

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect boundingRect;
@property (nonatomic) struct CGRect rect;
@property (retain, nonatomic) UIImageView *imageViewIfExists;
@property (nonatomic) _Bool estimated;

@end
