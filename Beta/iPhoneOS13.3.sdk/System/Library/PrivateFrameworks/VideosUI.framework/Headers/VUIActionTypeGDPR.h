/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionTypeGDPR : VUIAction

{
    NSDictionary *_contextData;
    IKAppContext *_appContext;
}

@property (retain, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) IKAppContext *appContext;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;

@end
