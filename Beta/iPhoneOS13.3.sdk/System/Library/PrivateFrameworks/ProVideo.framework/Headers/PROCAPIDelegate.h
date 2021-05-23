/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PROCAPIDelegate : NSObject

{
    CDUnknownFunctionPointerType callback;
    void *userData;
}

- (void)plugInManager:(id)arg1 didLoadPlugIn:(id)arg2;

@end
