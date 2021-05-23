/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface OZFxPlugAPIManager : NSObject <Swift>

{
    NSMutableDictionary *_apis;
    struct PCRecursiveMutex _mutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (id)apiForProtocol:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;

@end
