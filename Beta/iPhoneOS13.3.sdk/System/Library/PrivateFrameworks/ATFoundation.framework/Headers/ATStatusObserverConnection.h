/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface ATStatusObserverConnection : NSObject

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)resume;
- (id)initWithConnection:(id)arg1;
- (void)fetchAllStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)connection:(id)arg1 updatedAssets:(id)arg2;
- (void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2;

@end
