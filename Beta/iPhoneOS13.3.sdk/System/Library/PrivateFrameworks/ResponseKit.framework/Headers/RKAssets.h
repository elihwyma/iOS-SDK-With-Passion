/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKAssets : NSObject

+ (id)localizedStrings;
+ (id)synonyms;
+ (id)contractedResponses;
+ (id)fixedPhrases;
+ (id)momentsPhrases;
+ (id)categoryKeywordMap;
+ (id)sensitiveSubjectRegularExpressionPatterns;
+ (id)polarTagKeywords;
+ (id)alternativeInversions;
+ (id)appreciationKeywords;
+ (id)constantClasses;

- (id)init;
- (id)initWithPlistURL:(id)arg1;

@end
