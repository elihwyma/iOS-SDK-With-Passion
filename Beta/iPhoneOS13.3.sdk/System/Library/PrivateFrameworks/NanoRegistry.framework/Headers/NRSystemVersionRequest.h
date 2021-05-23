/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NRSystemVersionRequest : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)connection;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)sendVersionRequestToCompanion;

@end
