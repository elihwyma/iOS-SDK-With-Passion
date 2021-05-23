/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber;

@interface SAVCSContentCabinet : SAUISnippet

@property (nonatomic) _Bool browseResults;
@property (copy, nonatomic) NSNumber *fullScreenEnabled;
@property (copy, nonatomic) NSArray *shelves;

+ (id)contentCabinet;
+ (id)contentCabinetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
