/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <FindMyDevice/Swift-Protocol.h>

@class NSObject;

@protocol FMDIdentifiable;

@protocol FMDAccessory <Swift>

@property (nonatomic, readonly) NSObject<FMDIdentifiable> *accessoryIdentifier;

@end
