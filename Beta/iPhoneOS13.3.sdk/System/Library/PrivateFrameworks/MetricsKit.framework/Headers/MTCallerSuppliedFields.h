/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface MTCallerSuppliedFields : NSObject

{
    NSArray *_eventData;
    NSDictionary *_cachedMergedFields;
}

@property (retain, nonatomic) NSArray *eventData;
@property (retain, nonatomic) NSDictionary *cachedMergedFields;

- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;
- (id)initWithEventData:(id)arg1;
- (id)valueForCallerSuppliedField:(id)arg1;
- (id)mergedFields;

@end
