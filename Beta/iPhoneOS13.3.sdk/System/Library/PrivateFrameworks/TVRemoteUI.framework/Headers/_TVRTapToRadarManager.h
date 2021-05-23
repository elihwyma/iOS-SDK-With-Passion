/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSURLComponents;

@interface _TVRTapToRadarManager : NSObject

{
    NSURLComponents *_urlComponents;
}

@property (retain, nonatomic) NSURLComponents *urlComponents;

+ (id)_captureScreenshot;
+ (id)bugImage;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2;

- (void)fileRadar;

@end
