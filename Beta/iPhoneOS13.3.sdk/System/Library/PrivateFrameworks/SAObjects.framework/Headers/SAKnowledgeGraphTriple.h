/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAKnowledgeGraphTriple : AceObject <Swift>

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSString *object;
@property (copy, nonatomic) NSString *predicate;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *subject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)graphTriple;
+ (id)graphTripleWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
