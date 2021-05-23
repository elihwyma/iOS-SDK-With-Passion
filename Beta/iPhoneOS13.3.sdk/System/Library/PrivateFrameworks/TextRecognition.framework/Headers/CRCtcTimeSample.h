/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@interface CRCtcTimeSample : NSObject

{
    struct CRCtcCandidate _blank;
    struct CRCTCPriorityQueue *_sample;
}

@property struct CRCTCPriorityQueue *sample;
@property struct CRCtcCandidate blank;

- (id)init;
- (void)dealloc;
- (const vector_cdb6db61 *)candidates;
- (void)addCandidate:(struct CRCtcCandidate)arg1;
- (void)trimCandidates;
- (struct CRCtcCandidate)topCandidate;

@end
