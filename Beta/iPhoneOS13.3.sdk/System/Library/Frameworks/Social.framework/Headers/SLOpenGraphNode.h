/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface SLOpenGraphNode : NSObject

{
    _Bool _likedByMe;
    unsigned long long _numberOfLikes;
    unsigned long long _numberOfFriendLikes;
    int _fetchState;
    NSURL *_URL;
    NSArray *_likedByFriends;
}

@property (nonatomic) int fetchState;
@property (readonly) NSURL *URL;
@property (readonly) _Bool likedByMe;
@property (readonly) unsigned long long globalLikeCount;
@property (readonly) unsigned long long friendLikeCount;
@property (readonly) NSArray *likedByFriends;

- (void)invalidate;
- (id)initWithURL:(id)arg1;
- (id)cache;
- (void)_startUpdateIfNeeded;
- (void)likeWithCompletion:(CDUnknownBlockType)arg1;
- (void)unlikeWithCompletion:(CDUnknownBlockType)arg1;

@end
