/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLASMetric : NSObject

{
    short _metricType;
    NSString *_metricKey;
    NSArray *_metricProperties;
    CDUnknownBlockType _query;
    CDUnknownBlockType _summarizer;
}

@property (retain) NSString *metricKey;
@property short metricType;
@property (retain) NSArray *metricProperties;
@property (copy) CDUnknownBlockType query;
@property (copy) CDUnknownBlockType summarizer;

- (id)initMetric:(id)arg1 withType:(short)arg2 withProperties:(id)arg3 withQuery:(id)arg4 andSummarizerBlock:(CDUnknownBlockType)arg5;

@end
