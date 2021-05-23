/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIFacebookLikeStatus : NSObject <Swift>

{
    NSArray *_friends;
    NSURL *_url;
    _Bool _userLiked;
}

@property (copy, nonatomic) NSArray *friendNames;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isUserLiked) _Bool userLiked;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2;

@end
