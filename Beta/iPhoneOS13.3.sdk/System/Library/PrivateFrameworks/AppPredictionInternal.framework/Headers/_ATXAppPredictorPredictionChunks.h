/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _ATXAppPredictorPredictionChunks : NSObject

{
    NSData *_predictionSetChunk;
    NSData *_feedbackStateChunk;
}

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)chunkArray;
- (id)joinChunks;

@end
