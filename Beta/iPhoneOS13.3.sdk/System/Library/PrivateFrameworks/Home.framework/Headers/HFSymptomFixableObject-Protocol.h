/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HMSymptomsHandler, NSSet, NSUUID;

@protocol HFSymptomFixableObject <Swift>

@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (nonatomic, readonly) NSSet *accessories;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;

@end
