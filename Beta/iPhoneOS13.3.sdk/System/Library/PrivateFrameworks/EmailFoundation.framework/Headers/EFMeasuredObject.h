/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFMeasuredObject : NSObject

{
    id _object;
    double _measure;
}

@property (retain, nonatomic) id object;
@property (nonatomic) double measure;

+ (id)max:(id)arg1;
+ (id)object:(id)arg1 withMeasure:(double)arg2;
+ (id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2;

- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithObject:(id)arg1 measure:(double)arg2;

@end
