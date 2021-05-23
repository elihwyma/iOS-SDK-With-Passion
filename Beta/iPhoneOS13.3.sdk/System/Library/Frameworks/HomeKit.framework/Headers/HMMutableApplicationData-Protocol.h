/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/Swift-Protocol.h>

@class HMApplicationData, NSUUID;

@protocol HMMutableApplicationData <Swift>

@property (copy, readonly) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

@end
