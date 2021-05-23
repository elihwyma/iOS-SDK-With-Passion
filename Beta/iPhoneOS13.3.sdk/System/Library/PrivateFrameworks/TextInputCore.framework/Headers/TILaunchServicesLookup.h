/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

#import <TextInputCore/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@interface TILaunchServicesLookup : NSObject <Swift>

{
    NSArray *_cache;
    NSDate *_lastCacheUpdate;
}

@property (retain, nonatomic) NSArray *cache;
@property (retain, nonatomic) NSDate *lastCacheUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)lookupAppNames;
+ (void)enumerateInstalledApplicationNames:(CDUnknownBlockType)arg1;
+ (id)genreIDsForApplicationIdentifier:(id)arg1;
+ (void)disableForTesting:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)resetCache;
- (id)appNames;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (id)tryCache;
- (void)cacheNames:(id)arg1;
- (void)enumerateAppNames:(CDUnknownBlockType)arg1;

@end
