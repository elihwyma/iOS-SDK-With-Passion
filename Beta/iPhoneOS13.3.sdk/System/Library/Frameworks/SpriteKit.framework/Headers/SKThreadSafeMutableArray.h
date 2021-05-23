/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableArray : NSObject

{
    struct _opaque_pthread_mutex_t _storageLock;
    NSMutableArray *_storage;
}

@property (weak, readonly) NSArray *arrayRepresentation;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (id)initWithNSMutableArray:(id)arg1;

@end
