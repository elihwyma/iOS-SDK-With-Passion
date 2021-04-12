//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>

@class HMDVideoResolution, NSNumber;

@interface HMDVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    HMDVideoResolution *_videoResolution;
    NSNumber *_framerate;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)translateImageResolution:(id)arg1 imageWidth:(id )arg2 imageHeight:(id )arg3;
@property(readonly, copy, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, copy, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)translateImageWidth:(id)arg1 imageHeight:(id)arg2;
- (id)initWithResolution:(id)arg1 framerate:(id)arg2;

@end

