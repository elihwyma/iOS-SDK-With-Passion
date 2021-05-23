/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface NPAverage : NSObject

{
    unsigned long long _size;
    NSMutableArray *_samples;
}

@property (retain) NSMutableArray *samples;
@property unsigned long long size;
@property (readonly) unsigned long long average;
@property (readonly) _Bool isLastValid;
@property (readonly) _Bool isAnyValid;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (void)addSample:(unsigned long long)arg1;
- (id)initWithSampleSize:(unsigned long long)arg1;
- (void)addSamples:(id)arg1;

@end
