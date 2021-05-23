/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <SampleAnalysis/Swift-Protocol.h>

@class NSArray, NSUUID;

@protocol SALibraryCache <Swift>

@property (readonly) NSUUID *uuid;
@property (readonly) NSArray *binaryLoadInfos;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) unsigned long long textSegmentsEndAddress;

@end
