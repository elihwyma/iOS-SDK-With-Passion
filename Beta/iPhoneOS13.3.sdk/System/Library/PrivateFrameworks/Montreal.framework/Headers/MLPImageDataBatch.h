/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPDataBatch.h>

@class NSArray;

@interface MLPImageDataBatch : MLPDataBatch

{
    struct NSArray *_images;
    struct NSArray *_lossLabels;
    NSArray *_labels;
}

@property (retain) NSArray *images;
@property (retain) NSArray *lossLabels;
@property (retain) NSArray *labels;

- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;

@end
