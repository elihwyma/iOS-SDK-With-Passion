/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject

{
    long long _type;
    long long _status;
    GKPlayer *_player;
    long long _number;
}

@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) long long number;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
