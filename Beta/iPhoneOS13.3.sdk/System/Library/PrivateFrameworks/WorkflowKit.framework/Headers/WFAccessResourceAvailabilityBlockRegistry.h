/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFAccessResourceAvailabilityBlockRegistry : NSObject

+ (CDUnknownBlockType)contactAccessResourceAvailabilityBlock;
+ (void)setContactAccessResourceAvailabilityBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)remoteServerAccessResourceAvailabilityBlock;
+ (void)setRemoteServerAccessResourceAvailabilityBlock:(CDUnknownBlockType)arg1;
+ (void)rediscoverAvailabilityBlocksIfNeeded;

@end
