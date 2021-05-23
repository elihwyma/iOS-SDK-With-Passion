/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriTaskmaster, NSString;

@interface AFSiriTaskContextProvider : NSObject

{
    AFSiriTaskmaster *_taskmaster;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)getAppContextWithDeliveryHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTaskmaster:(id)arg1;

@end
