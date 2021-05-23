/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@protocol SASupportCondition;

@interface SAConstraintSupport : AceObject <Swift>

@property (retain, nonatomic) id <SASupportCondition> condition;
@property (copy, nonatomic) NSString *property;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)constraintSupport;
+ (id)constraintSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
