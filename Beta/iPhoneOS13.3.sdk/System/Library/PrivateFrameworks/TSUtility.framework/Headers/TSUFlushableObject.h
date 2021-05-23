/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSString, TSUFlushingManager;

@protocol NSLocking;

@interface TSUFlushableObject : NSObject

{
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (void)unload;
- (void)flush;
- (id)ownerAutoreleasedAccess;
- (_Bool)hasFlushableContent;
- (void)addOwner;
- (void)ownerWillAccess;
- (void)ownerDidAccess;
- (id)ownerRetain;
- (void)ownerRelease;

@end
