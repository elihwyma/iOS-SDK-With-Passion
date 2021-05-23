/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject

{
    _Bool _waitingForReply;
    NSData *_userInfoData;
    CDUnknownBlockType _reply;
}

@property (nonatomic) _Bool waitingForReply;
@property (copy, nonatomic) NSData *userInfoData;
@property (copy, nonatomic) CDUnknownBlockType reply;

@end
