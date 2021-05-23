/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKPlayerInternal.h>

@class NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal

{
    GKPlayerInternal *_hostPlayerInternal;
    NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)playerID;
- (_Bool)isGuestPlayer;
- (id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2;
- (id)guestIdentifier;
- (void)setGuestIdentifier:(id)arg1;

@end
