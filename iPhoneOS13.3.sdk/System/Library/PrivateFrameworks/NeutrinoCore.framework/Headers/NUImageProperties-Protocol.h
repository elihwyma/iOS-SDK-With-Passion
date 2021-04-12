//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString, NSURL;
@protocol NURAWImageProperties;

@protocol NUImageProperties <NSObject>
@property(readonly) id <NURAWImageProperties> rawProperties;
@property(readonly) NSDictionary *auxiliaryImagesProperties;
@property(readonly) BOOL isFusedOvercapture;
@property(readonly) long long componentInfo;
@property(readonly) long long alphaInfo;
@property(readonly) NSString *fileUTI;
@property(readonly) long long orientation;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) CGColorSpace colorSpace;
@property(readonly) NSDictionary *metadata;
@property(readonly) NSURL *url;
@end

