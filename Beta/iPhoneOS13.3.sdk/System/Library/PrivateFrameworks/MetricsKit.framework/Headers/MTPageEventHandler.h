/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTStandardEventHandler.h>

@class NSMutableArray;

@protocol MTPageEventHandlerDelegate;

@interface MTPageEventHandler : MTStandardEventHandler

{
    NSMutableArray *_trackedPageHistory;
}

@property (retain, nonatomic) NSMutableArray *trackedPageHistory;
@property (weak, nonatomic) id <MTPageEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)arg1;
- (id)pageHistory:(id)arg1;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;
- (void)updatePageHistoryWithPage:(id)arg1;

@end
