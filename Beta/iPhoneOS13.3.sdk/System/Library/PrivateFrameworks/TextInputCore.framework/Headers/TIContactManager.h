/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface TIContactManager : NSObject

{
    NSUUID *contactCollectionUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *contactCollectionUUID;

+ (id)singletonInstance;
+ (id)sharedTIContactManager;
+ (void)setSharedTIContactManager:(id)arg1;

- (void)unload;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (void)getOnce:(CDUnknownBlockType)arg1;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;

@end
