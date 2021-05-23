/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@protocol NTKComplicationTimelineWindow <Swift>

- (unsigned short)leftmostContiguousEntryDate;
- (unsigned short)rightmostContiguousEntryDate;
- (unsigned short)leftEntryCount;
- (unsigned short)rightEntryCount;

@end
