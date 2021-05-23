/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface HAECGSample : NSObject

{
    NSData *_representation;
    double _timestamp;
}

@property (nonatomic, readonly) NSData *representation;
@property (nonatomic, readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;

@end
