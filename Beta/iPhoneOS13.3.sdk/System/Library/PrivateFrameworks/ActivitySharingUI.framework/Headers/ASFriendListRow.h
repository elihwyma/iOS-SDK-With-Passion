/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <Foundation/NSObject.h>

@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject

{
    ASFriend *_friend;
    struct _HKFitnessFriendActivitySnapshot *_snapshot;
}

@property (retain, nonatomic) ASFriend *friend;
@property (retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot;

- (_Bool)isEqual:(id)arg1;

@end
