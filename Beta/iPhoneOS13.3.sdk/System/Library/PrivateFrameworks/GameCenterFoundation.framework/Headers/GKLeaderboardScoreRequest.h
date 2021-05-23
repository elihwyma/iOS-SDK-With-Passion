/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject

{
    GKPlayerInternal *_playerInternal;
    NSString *_gameBundleID;
    NSString *_identifier;
    NSString *_groupIdentifier;
    _Bool _friendsOnly;
    long long _timeScope;
    _Bool _prefetch;
}

@property (copy, nonatomic) GKPlayerInternal *playerInternal;
@property (copy, nonatomic) NSString *gameBundleID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (nonatomic) _Bool friendsOnly;
@property (nonatomic) long long timeScope;
@property (nonatomic, getter=isPrefetch) _Bool prefetch;

+ (_Bool)supportsSecureCoding;
+ (id)requestForPlayerInternals:(id)arg1;
+ (id)requestForRankRange:(struct _NSRange)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
