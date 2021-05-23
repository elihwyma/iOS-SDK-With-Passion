/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAUIAppPunchOut;

@interface SAUIAttributionSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (nonatomic) _Bool showKeyLine;

+ (id)attributionSnippet;
+ (id)attributionSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
