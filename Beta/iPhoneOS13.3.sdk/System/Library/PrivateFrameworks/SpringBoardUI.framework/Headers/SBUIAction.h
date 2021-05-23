/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage, UIView;

@interface SBUIAction : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    NSString *_systemImageName;
    UIView *_badgeView;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *systemImageName;
@property (nonatomic, readonly) UIView *badgeView;
@property (copy, nonatomic, readonly) CDUnknownBlockType handler;

- (id)init;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 badgeView:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 systemImageName:(id)arg3 badgeView:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
