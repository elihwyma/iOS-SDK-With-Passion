/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTStickerFetchRequest : NSObject

{
    long long _resultLimit;
    NSString *_avatarIdentifier;
    NSString *_stickerIdentifier;
    long long _criteria;
}

@property (nonatomic, readonly) long long resultLimit;
@property (copy, nonatomic, readonly) NSString *avatarIdentifier;
@property (copy, nonatomic, readonly) NSString *stickerIdentifier;
@property (nonatomic, readonly) long long criteria;

+ (id)requestForMostRecentStickersWithResultLimit:(long long)arg1;
+ (id)requestForAllRecentStickers;
+ (id)requestForStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCriteria:(long long)arg1;
- (id)initWithCriteria:(long long)arg1 resultLimit:(long long)arg2;
- (id)initWithCriteria:(long long)arg1 avatarIdentifier:(id)arg2 stickerIdentifier:(id)arg3;

@end
