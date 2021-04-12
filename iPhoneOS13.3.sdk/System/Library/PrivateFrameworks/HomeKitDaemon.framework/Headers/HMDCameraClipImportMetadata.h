//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface HMDCameraClipImportMetadata : NSObject
{
    NSDate *_startDate;
    double _targetFragmentDuration;
    NSArray *_videoSegments;
    NSArray *_posterFrames;
}

@property(readonly) NSArray *posterFrames; // @synthesize posterFrames=_posterFrames;
@property(readonly) NSArray *videoSegments; // @synthesize videoSegments=_videoSegments;
@property(readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (id)initClipData:(id)arg1;

@end

