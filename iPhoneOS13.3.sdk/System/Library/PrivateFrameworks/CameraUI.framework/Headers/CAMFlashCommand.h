//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>


@interface CAMFlashCommand : CAMCaptureCommand <NSCopying, NSCoding>
{
    long long __flashMode;
}

@property(readonly, nonatomic) long long _flashMode; // @synthesize _flashMode=__flashMode;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlashMode:(long long)arg1;

@end

