/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <Foundation/NSObject.h>

@interface SASProximitySessionTransport : NSObject

{
    CDUnknownBlockType _receivedDataBlock;
}

@property (copy) CDUnknownBlockType receivedDataBlock;

- (void)invalidate;
- (void)activate;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;

@end
