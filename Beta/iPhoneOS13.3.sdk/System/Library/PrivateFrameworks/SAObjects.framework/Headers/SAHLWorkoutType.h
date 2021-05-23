/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAHLWorkoutType : AceObject <Swift>

@property (copy, nonatomic) NSString *swimmingLocationType;
@property (copy, nonatomic) NSString *workoutCategory;
@property (copy, nonatomic) NSString *workoutLocationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)workoutType;
+ (id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
