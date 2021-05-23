/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary;

@interface SRFetchResult : NSObject

{
    double _timestamp;
    NSData *_sampleData;
    NSDictionary *_metadata;
    Class _sampleClass;
}

@property (retain) NSData *sampleData;
@property (retain) NSDictionary *metadata;
@property (retain) Class sampleClass;
@property (copy, readonly) id sample;
@property (readonly) double timestamp;

+ (void)initialize;
+ (id)new;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 sampleClass:(Class)arg4;

@end
