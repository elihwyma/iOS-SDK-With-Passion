/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTConfigAMSMetricsDelegate, MTConvenienceEnvironmentDelegate, MTEventRecorderAMSMetricsDelegate, NSString;

@interface MTUIKitStoreAMSBagDelegatePackage : NSObject

{
    CDUnknownBlockType _hostAppBlock;
    MTConfigAMSMetricsDelegate *_configDelegate;
    MTEventRecorderAMSMetricsDelegate *_eventRecorderDelegate;
    MTConvenienceEnvironmentDelegate *_environmentDelegate;
}

@property (copy, nonatomic) CDUnknownBlockType hostAppBlock;
@property (retain, nonatomic) MTConfigAMSMetricsDelegate *configDelegate;
@property (retain, nonatomic) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate;
@property (retain, nonatomic) MTConvenienceEnvironmentDelegate *environmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithAMSBag:(id)arg1;
- (id)initWithAMSBag:(id)arg1 containerId:(id)arg2 pageURLBlock:(CDUnknownBlockType)arg3 resourceRevNumBlock:(CDUnknownBlockType)arg4 hostAppBlock:(CDUnknownBlockType)arg5;

@end
