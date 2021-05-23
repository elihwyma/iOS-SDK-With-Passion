/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKBasePlayer.h>

@class NSString;

@interface GKCloudPlayer : GKBasePlayer

{
    NSString *_identifier;
    NSString *_name;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (void)getCurrentSignedInPlayerForContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)playerID;

@end
