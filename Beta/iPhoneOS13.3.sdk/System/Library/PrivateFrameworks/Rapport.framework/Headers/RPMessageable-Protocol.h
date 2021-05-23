/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@class NSObject;

@protocol OS_dispatch_queue;

@protocol RPMessageable

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

- (unsigned short)registerRequestID:options:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendRequestID:request:destinationID:options:responseHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deregisterRequestID: /* Error: Ran out of types for this method. */;
- (unsigned short)sendEventID:event:destinationID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerEventID:options:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)deregisterEventID: /* Error: Ran out of types for this method. */;
- (unsigned short)sendEventID:event:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendRequestID:request:options:responseHandler: /* Error: Ran out of types for this method. */;

@end
