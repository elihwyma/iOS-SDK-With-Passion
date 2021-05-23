/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString;

@interface SAErrorIndicatorStatus : AceObject

@property (nonatomic) _Bool deviceFixingProblems;
@property (copy, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)errorIndicatorStatus;
+ (id)errorIndicatorStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
