/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionLocationPrompt : VUIAction

{
    _Bool _geoLocationEnforced;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_dialogMetrics;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool geoLocationEnforced;
@property (retain, nonatomic) NSDictionary *dialogMetrics;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1;
- (void)_locationAuthorizationStatusDidChange:(id)arg1;

@end
