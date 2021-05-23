/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/Swift-Protocol.h>

@protocol ATXActionProducerDelegate;

@protocol ATXActionProducer <Swift>

@property (weak, nonatomic) id <ATXActionProducerDelegate> delegate;

- (unsigned short)produceActions;

@end
