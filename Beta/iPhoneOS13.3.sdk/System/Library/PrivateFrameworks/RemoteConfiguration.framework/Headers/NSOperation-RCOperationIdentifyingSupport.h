/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSOperation.h>

@class NSString;

@interface NSOperation (RCOperationIdentifyingSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)shortOperationDescription;
- (id)longOperationDescription;

@end
