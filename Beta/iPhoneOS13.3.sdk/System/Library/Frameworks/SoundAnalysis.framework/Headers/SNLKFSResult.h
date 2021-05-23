/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString;

@interface SNLKFSResult : NSObject <Swift>

{
    float _decibelLevel;
    CDStruct_e83c9415 timeRange;
}

@property (nonatomic) float decibelLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;

- (void)setTimeRange:(CDStruct_e83c9415)arg1;

@end
