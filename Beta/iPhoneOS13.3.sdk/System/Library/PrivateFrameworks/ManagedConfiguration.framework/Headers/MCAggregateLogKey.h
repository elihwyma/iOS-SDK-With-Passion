/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCAggregateLogKey : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long value;

+ (id)keys;
+ (unsigned long long)bucket;
+ (id)bucketSpecificKeys:(unsigned long long)arg1;
+ (id)keysForAllBuckets;
+ (id)debugKeys;

@end
