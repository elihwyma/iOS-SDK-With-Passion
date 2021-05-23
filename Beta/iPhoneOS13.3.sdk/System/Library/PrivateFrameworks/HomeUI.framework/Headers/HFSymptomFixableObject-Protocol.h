/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HMSymptomsHandler, NSSet, NSUUID;

@protocol HFSymptomFixableObject <Swift>

@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (nonatomic, readonly) NSSet *accessories;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;

@end
