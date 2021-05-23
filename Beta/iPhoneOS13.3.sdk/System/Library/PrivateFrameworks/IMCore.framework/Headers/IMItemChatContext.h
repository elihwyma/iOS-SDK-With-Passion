/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMHandle;

@interface IMItemChatContext : NSObject

{
    IMHandle *_senderHandle;
    IMHandle *_otherHandle;
}

- (void)dealloc;

@end
