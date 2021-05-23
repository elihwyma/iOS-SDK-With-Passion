/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVDateRangeMetadataGroupInternal : NSObject

{
    NSDate *startDate;
    NSDate *endDate;
    NSArray *metadataItems;
    NSString *classifyingLabel;
    NSString *uniqueID;
    NSDate *discoveryTimestamp;
    NSDate *modificationTimestamp;
    NSDictionary *extraFigProperties;
}

@end
