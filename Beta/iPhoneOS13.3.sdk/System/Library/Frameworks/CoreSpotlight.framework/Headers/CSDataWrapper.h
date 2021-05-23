/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSData;

@protocol OS_xpc_object;

@interface CSDataWrapper : NSObject

{
    _Bool _mapped;
    NSData *_data;
    unsigned long long _dataSize;
    NSObject<OS_xpc_object> *_xpcData;
    const void *_dataPtr;
    unsigned long long _mapSize;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcData;
@property (nonatomic, readonly) const void *dataPtr;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic, readonly) unsigned long long mapSize;
@property (nonatomic, readonly) _Bool mapped;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithXPCValue:(id)arg1;

@end
