/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionAlert : VUIAction

{
    NSString *_title;
    NSString *_descriptionString;
    NSString *_dismissButtonTitle;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) NSString *dismissButtonTitle;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1;

@end
