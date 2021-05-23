/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@interface CLSReportItem : NSObject

+ (id)sum:(id)arg1;
+ (id)median:(id)arg1;
+ (id)mean:(id)arg1;
+ (id)multiply:(id)arg1 withScalar:(double)arg2;
+ (id)midrange:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)dictionaryRepresentation;
- (id)sum:(id)arg1;
- (void)add:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1 copyIfSameType:(_Bool)arg2;
- (void)scalarMultiply:(double)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)scalarProduct:(double)arg1;

@end
