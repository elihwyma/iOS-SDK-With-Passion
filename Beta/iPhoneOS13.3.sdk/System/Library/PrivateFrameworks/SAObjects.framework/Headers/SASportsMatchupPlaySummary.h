/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASportsAthlete;

@interface SASportsMatchupPlaySummary : AceObject <Swift>

@property (nonatomic) _Bool appliesToAwayTeam;
@property (nonatomic) _Bool appliesToHomeTeam;
@property (copy, nonatomic) NSString *nonFormattedTime;
@property (retain, nonatomic) SASportsAthlete *offensivePlayer;
@property (copy, nonatomic) NSString *summaryDescription;
@property (copy, nonatomic) NSString *time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)matchupPlaySummary;
+ (id)matchupPlaySummaryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
