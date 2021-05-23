/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthKit/HKObject.h>

@class NSString;

@interface HKObject (WDExtensions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)deleteObjectWithHealthStore:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
