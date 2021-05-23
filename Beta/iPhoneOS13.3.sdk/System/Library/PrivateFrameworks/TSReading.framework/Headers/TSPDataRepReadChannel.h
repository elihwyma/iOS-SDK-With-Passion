/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, SFUDataRepresentation;

@protocol OS_dispatch_queue, SFUInputStream;

@interface TSPDataRepReadChannel : NSObject

{
    SFUDataRepresentation *_representation;
    id <SFUInputStream> _inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)initWithRepresentation:(id)arg1;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
