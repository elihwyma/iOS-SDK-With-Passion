/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableDictionary : NSObject

{
    struct _opaque_pthread_mutex_t _storageLock;
    NSMutableDictionary *_storage;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNSMutableDictionary:(id)arg1;

@end
