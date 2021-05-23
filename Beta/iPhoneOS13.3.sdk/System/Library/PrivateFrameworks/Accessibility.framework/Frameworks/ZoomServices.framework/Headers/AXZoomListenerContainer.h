/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/ZoomServices.framework/ZoomServices
 */

#import <NSObject.h>

@class NSString;

@interface AXZoomListenerContainer : NSObject

{
    CDUnknownBlockType handler;
    NSString *identifier;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) NSString *identifier;

@end
