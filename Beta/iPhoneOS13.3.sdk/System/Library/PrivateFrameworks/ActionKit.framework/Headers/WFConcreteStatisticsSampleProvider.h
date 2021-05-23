/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSProxy.h>

@class NSArray, NSObject, NSString;

@protocol WFStatisticsSampleProvider;

@interface WFConcreteStatisticsSampleProvider : NSProxy

{
    NSObject<WFStatisticsSampleProvider> *_sampleProvider;
}

@property (retain, nonatomic) NSObject<WFStatisticsSampleProvider> *sampleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canProvideDataSamples;
@property (nonatomic, readonly) NSArray *dataSamples;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSampleProvider:(id)arg1;

@end
