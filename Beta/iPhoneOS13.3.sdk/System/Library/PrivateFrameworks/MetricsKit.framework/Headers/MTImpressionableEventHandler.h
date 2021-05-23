/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTStandardEventHandler.h>

@protocol MTImpressionableEventHandlerDelegate;

@interface MTImpressionableEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id <MTImpressionableEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)impressions:(id)arg1;
- (id)xpViewablePercentage:(id)arg1;

@end
