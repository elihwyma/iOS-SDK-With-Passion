/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface HFHomePropertyCacheManager : NSObject

{
    NSMutableDictionary *_objectCaches;
}

@property (retain, nonatomic) NSMutableDictionary *objectCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)_clearCachedValues;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (id)valueForObject:(id)arg1 key:(id)arg2 invalidationReasons:(unsigned long long)arg3 recalculationBlock:(CDUnknownBlockType)arg4;

@end
