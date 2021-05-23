/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface GKTournamentPredicate : NSObject

{
    NSPredicate *_predicate;
}

@property (retain, nonatomic) NSPredicate *predicate;

+ (_Bool)supportsSecureCoding;
+ (id)predicateForAvailableTournaments;
+ (id)predicateForAvailableCustomTournaments;
+ (id)predicateForAvailableAutoTournaments;
+ (id)predicateForAvailableTournamentsPlayerRegisteredIn;
+ (id)predicateForPastTournaments;
+ (id)predicateForPastAutoTournaments;
+ (id)predicateForPastCustomTournaments;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
