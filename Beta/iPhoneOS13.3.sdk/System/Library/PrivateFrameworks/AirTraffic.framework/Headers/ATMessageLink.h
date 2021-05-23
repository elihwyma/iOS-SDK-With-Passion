/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATMessageLink : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isInitialized) _Bool initialized;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (nonatomic, readonly) int endpointType;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (void)removeRequestHandlerForDataClass:(id)arg1;
- (void)sendResponse:(id)arg1 withProgress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
