/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSULogCatThreadSafeMutableSet : NSObject

{
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)init;
- (id)description;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (id)immutableSet;

@end
