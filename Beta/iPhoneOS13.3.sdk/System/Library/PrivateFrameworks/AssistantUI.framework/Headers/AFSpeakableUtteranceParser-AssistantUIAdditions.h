/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <AssistantServices/AFSpeakableUtteranceParser.h>

@interface AFSpeakableUtteranceParser (AssistantUIAdditions)

+ (id)_domainsForStringWithFormat:(id)arg1;
+ (id)afui_speakableUtteranceParserForCurrentLanguage;

- (id)_builtInDomains;
- (_Bool)afui_hasExternalDomainsForStringWithFormat:(id)arg1;

@end
