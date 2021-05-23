/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKPlayerInternal.h>

@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal

{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)firstName;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (id)compositeName;
- (void)setCompositeName:(id)arg1;

@end
