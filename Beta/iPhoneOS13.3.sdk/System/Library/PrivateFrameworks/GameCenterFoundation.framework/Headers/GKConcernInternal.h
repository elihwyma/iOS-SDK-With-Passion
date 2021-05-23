/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation

{
    GKPlayerInternal *_player;
    NSString *_message;
    unsigned int _concernID;
}

@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) unsigned int concernID;
@property (copy, nonatomic) NSString *message;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
