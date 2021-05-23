/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (retain, nonatomic) SAGuidanceGuideSnippet *guideSnippet;
@property (copy, nonatomic) NSNumber *guideTag;
@property (copy, nonatomic) NSString *languageCode;
@property (retain, nonatomic) SAGuidanceSuggestedUtterances *suggestedUtterances;

+ (id)guideUpdate;
+ (id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
