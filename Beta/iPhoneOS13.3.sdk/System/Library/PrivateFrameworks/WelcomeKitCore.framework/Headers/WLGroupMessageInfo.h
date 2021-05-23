/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WLGroupMessageInfo : NSObject

{
    _Bool _handleIDsAreComplete;
    NSString *_sourceThreadID;
    NSArray *_sortedHandleIDs;
    NSString *_roomName;
    NSString *_groupID;
}

@property (nonatomic, readonly) NSString *sourceThreadID;
@property (nonatomic, readonly) NSArray *sortedHandleIDs;
@property (nonatomic, readonly) _Bool handleIDsAreComplete;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSString *groupID;

+ (id)groupMessageInfoWithSourceThreadID:(id)arg1 sortedHandleIDs:(id)arg2 handleIDsAreComplete:(_Bool)arg3 roomName:(id)arg4 groupID:(id)arg5;

@end
