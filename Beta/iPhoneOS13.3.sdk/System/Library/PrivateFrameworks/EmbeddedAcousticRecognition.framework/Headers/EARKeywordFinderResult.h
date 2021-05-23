/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface EARKeywordFinderResult : NSObject

{
    NSArray *_correctedUtterances;
}

@property (copy, nonatomic, readonly) NSArray *correctedUtterances;

- (id)description;
- (id)_initWithCorrectedUtterances:(id)arg1;

@end
