/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal

{
    NSString *_reason;
    NSString *_reason2;
    unsigned int _rid;
    int _source;
}

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (int)defaultFamiliarity;

@end
