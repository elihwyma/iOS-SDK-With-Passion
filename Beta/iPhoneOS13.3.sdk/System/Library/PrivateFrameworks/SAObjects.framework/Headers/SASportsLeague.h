/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASportsSeason;

@interface SASportsLeague : AceObject <Swift>

@property (copy, nonatomic) NSString *diplayedText;
@property (nonatomic) _Bool displayTeamLocationOverName;
@property (copy, nonatomic) NSString *displayedText;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SASportsSeason *season;
@property (copy, nonatomic) NSString *sport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)league;
+ (id)leagueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
