/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface VUIActionShareSheet : VUIAction

{
    NSString *_urlString;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageURLStr;
    UIView *_sourceView;
}

@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) UIView *sourceView;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 viewElement:(id)arg2 sourceView:(id)arg3;

@end
