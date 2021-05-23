/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKMessageClassifier : NSObject

+ (id)preferredLanguages;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2;
+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2 conversationTurns:(id)arg3;
+ (_Bool)questionClassification:(id)arg1 withLanguageIdentifier:(id)arg2;

@end
