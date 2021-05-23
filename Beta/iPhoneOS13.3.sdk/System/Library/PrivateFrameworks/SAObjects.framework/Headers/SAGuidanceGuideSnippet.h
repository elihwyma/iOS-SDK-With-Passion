/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SAUIAppPunchOut, SAUIButton;

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (retain, nonatomic) SAUIButton *appPunchOutButton;
@property (retain, nonatomic) SAUIAppPunchOut *appStorePunchOut;
@property (copy, nonatomic) NSArray *domainSnippets;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSArray *intentEnabledAppSnippets;

+ (id)guideSnippet;
+ (id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
