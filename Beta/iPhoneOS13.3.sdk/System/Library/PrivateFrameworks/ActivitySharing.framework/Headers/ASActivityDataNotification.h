/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class ASFriend;

@interface ASActivityDataNotification : NSObject

{
    ASFriend *_friend;
    id _sample;
}

@property (retain, nonatomic) ASFriend *friend;
@property (retain, nonatomic) id sample;

@end
