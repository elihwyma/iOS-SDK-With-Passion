/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIStillWatchingAlertPresenter : NSObject

{
    double _timeoutInterval;
}

@property (nonatomic) double timeoutInterval;

+ (void)presentWithTitle:(id)arg1 presentingController:(id)arg2 timeout:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;

@end
