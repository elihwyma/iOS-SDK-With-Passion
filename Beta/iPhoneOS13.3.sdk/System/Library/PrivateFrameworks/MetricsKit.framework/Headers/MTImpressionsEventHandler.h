/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTImpressionableEventHandler.h>

@protocol MTImpressionsEventHandlerDelegate;

@interface MTImpressionsEventHandler : MTImpressionableEventHandler

@property (weak, nonatomic) id <MTImpressionsEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)arg1;
- (id)xpViewableThreshold:(id)arg1;

@end
