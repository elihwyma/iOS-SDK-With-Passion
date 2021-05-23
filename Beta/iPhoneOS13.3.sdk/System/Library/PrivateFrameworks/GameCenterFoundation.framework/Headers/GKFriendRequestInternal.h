/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSDate, NSString;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal

{
    NSString *_message;
    NSDate *_date;
}

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDate *date;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (int)defaultFamiliarity;

@end
