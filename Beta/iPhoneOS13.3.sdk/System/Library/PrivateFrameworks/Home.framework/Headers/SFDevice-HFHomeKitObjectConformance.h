/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Sharing/SFDevice.h>

#import <Home/Swift-Protocol.h>

@class NSString, NSUUID;

@interface SFDevice (HFHomeKitObjectConformance) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;

@end
