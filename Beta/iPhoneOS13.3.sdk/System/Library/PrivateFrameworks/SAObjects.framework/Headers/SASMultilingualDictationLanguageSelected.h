/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SASMultilingualDictationLanguageSelected : SABaseCommand <Swift>

@property (copy, nonatomic) NSDictionary *confidenceScoresByLanguage;
@property (copy, nonatomic) NSString *languageDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)multilingualDictationLanguageSelected;
+ (id)multilingualDictationLanguageSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
