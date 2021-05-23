/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/Swift-Protocol.h>

@class NSString;

@protocol ATMessageLink <Swift>

@property (nonatomic, readonly, getter=isInitialized) _Bool initialized;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (nonatomic, readonly) int endpointType;
@property (copy, nonatomic, readonly) NSString *identifier;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)sendResponse:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendRequest:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addRequestHandler:forDataClass: /* Error: Ran out of types for this method. */;
- (unsigned short)removeRequestHandlerForDataClass: /* Error: Ran out of types for this method. */;
- (unsigned short)sendResponse:withProgress:completion: /* Error: Ran out of types for this method. */;

@end
