/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface NUPageStyle : NSObject

{
    _Bool _hideToolbar;
    NSString *_title;
    UIImage *_titleImage;
    NSString *_nextButtonTitle;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (nonatomic) _Bool hideToolbar;

- (id)init;
- (_Bool)isEqual:(id)arg1;

@end
