/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <Swift>

@property (copy, nonatomic) NSArray *definitionEntries;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *partOfSpeech;
@property (copy, nonatomic) NSArray *synonyms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)definitionGroup;
+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
