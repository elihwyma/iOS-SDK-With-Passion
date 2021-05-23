/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMDisplayLinkTarget : NSObject

{
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType handler;

- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)displayLinkDidFire:(id)arg1;

@end
