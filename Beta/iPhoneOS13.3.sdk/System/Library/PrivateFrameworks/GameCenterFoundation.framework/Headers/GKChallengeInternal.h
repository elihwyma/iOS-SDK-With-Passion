/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameInternal, GKPlayerInternal, NSDate, NSOrderedSet, NSString;

@interface GKChallengeInternal : GKInternalRepresentation

{
    NSString *_challengeID;
    NSString *_message;
    NSDate *_issueDate;
    NSDate *_completionDate;
    NSOrderedSet *_compatibleBundleIDs;
    GKGameInternal *_game;
    GKPlayerInternal *_issuingPlayer;
    GKPlayerInternal *_receivingPlayer;
    long long _state;
    NSString *_bundleID;
}

@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSDate *issueDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSOrderedSet *compatibleBundleIDs;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) GKGameInternal *game;
@property (retain, nonatomic) GKPlayerInternal *issuingPlayer;
@property (retain, nonatomic) GKPlayerInternal *receivingPlayer;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) NSString *subtitleText;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (id)findLocalGameBundleID;

@end
