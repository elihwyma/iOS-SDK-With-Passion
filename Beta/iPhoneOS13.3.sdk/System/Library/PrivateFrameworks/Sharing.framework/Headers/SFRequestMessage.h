/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFMessage.h>

@interface SFRequestMessage : SFMessage

{
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)invalidate;

@end
