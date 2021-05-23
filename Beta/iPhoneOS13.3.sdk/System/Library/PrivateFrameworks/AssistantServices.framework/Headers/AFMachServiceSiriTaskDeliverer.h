/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject

{
    NSString *_machServiceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1;

- (id)initWithMachServiceName:(id)arg1;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
