/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SASportsLeague, SAUIAppPunchOut;

@interface SASportsSnippet : SAUISnippet

@property (retain, nonatomic) SASportsLeague *league;
@property (retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
