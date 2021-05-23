/*
 Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

#import <StreamingZip/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol SZExtractorDelegate;

@protocol SZExtractor <Swift>

@property (weak, nonatomic) id <SZExtractorDelegate> extractorDelegate;
@property (nonatomic, readonly) _Bool doesConsumeExtractedData;

- (MISSING_TYPE *)supplyBytes:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)finishStreamWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)suspendStreamWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)terminateStreamWithError:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)prepareForExtraction: /* Error: Ran out of types for this method. */;

@end
