/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *bodyTextColor;
@property (nonatomic) long long countDownSeconds;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (retain, nonatomic) SAUIColor *headerTextColor;

+ (id)callEmergencySnippet;
+ (id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
