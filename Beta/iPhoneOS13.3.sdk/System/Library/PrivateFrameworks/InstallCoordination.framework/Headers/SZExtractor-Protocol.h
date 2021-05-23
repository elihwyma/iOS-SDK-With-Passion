/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/Swift-Protocol.h>

@protocol SZExtractorDelegate;

@protocol SZExtractor <Swift>

@property (weak, nonatomic) id <SZExtractorDelegate> extractorDelegate;
@property (nonatomic, readonly) _Bool doesConsumeExtractedData;

- (unsigned short)supplyBytes:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)finishStreamWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendStreamWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)terminateStreamWithError:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForExtraction: /* Error: Ran out of types for this method. */;

@end
