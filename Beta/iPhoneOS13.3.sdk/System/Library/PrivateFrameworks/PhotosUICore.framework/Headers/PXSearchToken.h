/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, PXSearchTokenRepresentedObject, UIImage, UISearchToken;

@interface PXSearchToken : NSObject

{
    struct UISearchToken *_searchObject;
    PXSearchTokenRepresentedObject *_representedObject;
    struct UIImage *_image;
    NSString *_text;
    NSAttributedString *_attributedText;
}

@property (retain, nonatomic) UISearchToken *searchObject;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) PXSearchTokenRepresentedObject *representedObject;

- (id)textValue;
- (id)initWithText:(id)arg1 image:(struct UIImage *)arg2 representedObject:(id)arg3;
- (id)initWithAttributedText:(id)arg1 searchObject:(struct UISearchToken *)arg2 representedObject:(id)arg3;
- (id)initWithText:(id)arg1 searchObject:(struct UISearchToken *)arg2 representedObject:(id)arg3;

@end
