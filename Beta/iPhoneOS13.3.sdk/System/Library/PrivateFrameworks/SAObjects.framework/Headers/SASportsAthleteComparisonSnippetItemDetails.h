/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASportsMetadata, SAUIAppPunchOut;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <Swift>

@property (retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
@property (retain, nonatomic) SASportsMetadata *metadata;
@property (retain, nonatomic) SAUIAppPunchOut *providerPunchOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)athleteComparisonSnippetItemDetails;
+ (id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
