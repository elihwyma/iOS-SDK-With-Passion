/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@protocol WBSFormAutoFillCorrectionsStore <Swift>

- (unsigned short)getClassificationForFieldWithFingerprint:onDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalClassification:forFieldWithFingerprint:onDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllLocalClassificationsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeLocalClassificationsForDomain:recordedOnOrAfter:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLastCrowdsourcedCorrectionsRetrievalURLString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:retrievalURLString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setCrowdsourcedClassification:forFieldWithFingerprint:onDomain:completionHandler: /* Error: Ran out of types for this method. */;

@end
