//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject
{
    BOOL _hasMaxSupportedSize;
    long long _type;
    NSArray *_supportedSizes;
    CGSize _maxSupportedSize;
}

@property(nonatomic) CGSize maxSupportedSize; // @synthesize maxSupportedSize=_maxSupportedSize;
@property(nonatomic) BOOL hasMaxSupportedSize; // @synthesize hasMaxSupportedSize=_hasMaxSupportedSize;
@property(copy, nonatomic) NSArray *supportedSizes; // @synthesize supportedSizes=_supportedSizes;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;

@end

