/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKAchievementInternal, NSString, UIImage;

@interface GKAchievementDescription : NSObject <Swift>

{
    GKAchievementInternal *_internal;
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;
@property (retain) GKAchievementInternal *internal;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic, readonly) NSString *groupIdentifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *achievedDescription;
@property (copy, nonatomic, readonly) NSString *unachievedDescription;
@property (nonatomic, readonly) long long maximumPoints;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isReplayable) _Bool replayable;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)_achievementDescriptionFromGame:(id)arg1 propertyListDictionary:(id)arg2;
+ (id)_loadLocalAchievementDescriptionsForGame:(id)arg1;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)game;
- (id)imageNameForIcon;

@end
