/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSArray.h>

@interface NSArray (PrependStringToItems)

+ (id)arrayWithArray:(id)arg1 prependPath:(id)arg2;

- (id)objectWithNoNSNulls:(id *)arg1;
- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;

@end
