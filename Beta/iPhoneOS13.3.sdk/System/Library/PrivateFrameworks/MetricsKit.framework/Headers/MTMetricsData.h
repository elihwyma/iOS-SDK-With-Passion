/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class MTCallerSuppliedFields, MTPromise, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MTMetricsData : MTObject

{
    MTCallerSuppliedFields *_callerSuppliedFields;
    NSDictionary *_baseFields;
    NSDictionary *_eventSpecificFields;
    MTPromise *_configBaseFields;
    NSMutableDictionary *_performanceData;
    NSMutableArray *_postProcessingBlocks;
}

@property (retain, nonatomic) MTCallerSuppliedFields *callerSuppliedFields;
@property (retain, nonatomic) NSDictionary *baseFields;
@property (retain, nonatomic) NSDictionary *eventSpecificFields;
@property (retain, nonatomic) MTPromise *configBaseFields;
@property (retain, nonatomic) NSMutableDictionary *performanceData;
@property (retain, nonatomic) NSMutableArray *postProcessingBlocks;

- (id)description;
- (id)toDictionary;
- (id)recordEvent;
- (void)addPostProcessingBlock:(CDUnknownBlockType)arg1;
- (id)composeFieldsMaps;
- (void)cancelUnfinishedPromisedEventData;

@end
