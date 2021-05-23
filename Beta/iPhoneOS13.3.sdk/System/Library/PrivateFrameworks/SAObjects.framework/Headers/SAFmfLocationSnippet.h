/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber *atRequestedLocation;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSString *proximity;
@property (copy, nonatomic) NSURL *searchContext;

+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
