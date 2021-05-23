/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKConceptIndexUtilities : NSObject

+ (id)firstComponentForKeyPath:(id)arg1 error:(id *)arg2;
+ (id)indexedCodingsForCodings:(id)arg1 context:(id)arg2 error:(id *)arg3;
+ (id)conceptsForIndexedConcepts:(id)arg1 expectedCount:(long long)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)keyPathRemovingFirstComponentFromKeyPath:(id)arg1 error:(id *)arg2;
+ (id)keyPaths:(id)arg1 prefix:(id)arg2;

- (id)init;

@end
