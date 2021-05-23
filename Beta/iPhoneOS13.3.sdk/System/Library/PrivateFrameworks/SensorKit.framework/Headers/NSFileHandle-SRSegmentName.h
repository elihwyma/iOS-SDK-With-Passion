/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSFileHandle.h>

@class NSString;

@interface NSFileHandle (SRSegmentName)

@property (nonatomic, readonly) NSString *pathname;
@property (nonatomic, readonly) NSString *segmentName;

@end
