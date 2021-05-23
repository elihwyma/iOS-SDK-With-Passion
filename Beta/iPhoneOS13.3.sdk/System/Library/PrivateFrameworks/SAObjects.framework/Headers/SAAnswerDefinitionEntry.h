/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionEntry : AceObject <Swift>

@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSArray *variations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)definitionEntry;
+ (id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
