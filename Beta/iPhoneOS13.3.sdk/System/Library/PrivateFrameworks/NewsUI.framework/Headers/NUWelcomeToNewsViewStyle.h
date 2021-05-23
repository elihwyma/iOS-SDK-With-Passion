/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UIImage;

@interface NUWelcomeToNewsViewStyle : NSObject

{
    UIImage *_appIconImage;
    NSAttributedString *_titleAttributedString;
    NSAttributedString *_descriptionAttributedString;
}

@property (nonatomic, readonly) UIImage *appIconImage;
@property (copy, nonatomic, readonly) NSAttributedString *titleAttributedString;
@property (copy, nonatomic, readonly) NSAttributedString *descriptionAttributedString;

- (id)init;
- (id)createTitleAttributedString;
- (id)createDescriptionAttributedString;

@end
