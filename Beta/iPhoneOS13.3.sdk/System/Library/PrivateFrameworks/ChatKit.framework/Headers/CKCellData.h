/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface CKCellData : NSObject

{
    UIImage *_image;
    NSString *_title;
    NSString *_subtitle;
    NSString *_identifer;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *identifer;

- (id)initWithImage:(id)arg1 withTitle:(id)arg2 withSubtitle:(id)arg3;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2;

@end
