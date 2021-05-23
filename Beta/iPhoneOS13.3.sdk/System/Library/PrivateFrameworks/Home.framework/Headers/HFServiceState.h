/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFServiceState : NSObject

@property (copy, nonatomic, readonly) NSString *stateTypeIdentifier;
@property (nonatomic, readonly) long long primaryState;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;

+ (Class)stateClassForServiceDescriptor:(id)arg1;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (id)optionalCharacteristicTypes;
+ (id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2;

- (id)initWithBatchReadResponse:(id)arg1;

@end
