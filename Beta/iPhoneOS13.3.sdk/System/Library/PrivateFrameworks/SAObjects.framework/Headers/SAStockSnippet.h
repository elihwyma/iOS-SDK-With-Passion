/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut;

@interface SAStockSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSArray *stocks;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
