/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <ViceroyTrace/Swift-Protocol.h>

@protocol VCAdaptiveLearningDelegate <Swift>

- (unsigned short)learntBitrateForSegment:defaultValue: /* Error: Ran out of types for this method. */;
- (unsigned short)initialSettledBitrate;
- (unsigned short)previousISBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)adaptiveLearningState;
- (unsigned short)updateSegment:TBR:ISBTR:SATXBR:SARBR:BWE: /* Error: Ran out of types for this method. */;
- (unsigned short)shortTermAverageTBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)longTermAverageTBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)longTermAverageISBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)shortTermAverageISBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)longTermAverageSATXBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)shortTermAverageSATXBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)longTermAverageSARBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)shortTermAverageSARBRForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)longTermAverageBWEForSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)shortTermAverageBWEForSegment: /* Error: Ran out of types for this method. */;

@end
