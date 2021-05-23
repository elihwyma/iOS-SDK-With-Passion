/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface CAMCaptureCoordinationInfo : NSObject

{
    NSString *_identifier;
    NSSet *_allExpectedResultSpecifiers;
    unsigned long long _resultSpecifiers;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *allExpectedResultSpecifiers;
@property (nonatomic, readonly) unsigned long long resultSpecifiers;
@property (nonatomic, readonly, getter=isHDR) _Bool HDR;
@property (nonatomic, readonly, getter=isFiltered) _Bool filtered;
@property (nonatomic, readonly, getter=isOverCapture) _Bool overCapture;
@property (nonatomic, readonly, getter=isUnfilteredImageForFilteredPair) _Bool unfilteredImageForFilteredPair;
@property (nonatomic, readonly, getter=isFilteredImageForFilteredPair) _Bool filteredImageForFilteredPair;
@property (nonatomic, readonly, getter=isEV0ForHDREV0Pair) _Bool EV0ForHDREV0Pair;
@property (nonatomic, readonly, getter=isHDRForHDREV0Pair) _Bool HDRForHDREV0Pair;
@property (nonatomic, readonly, getter=isPrimaryAssetForOverCapturePair) _Bool primaryAssetForOverCapturePair;
@property (nonatomic, readonly, getter=isSecondaryAssetForOverCapturePair) _Bool secondaryAssetForOverCapturePair;
@property (nonatomic, readonly, getter=isFinalExpectedStillImageResult) _Bool finalExpectedStillImageResult;
@property (nonatomic, readonly, getter=isFinalExpectedVideoResult) _Bool finalExpectedVideoResult;
@property (nonatomic, readonly) _Bool representsFinalProcessedStillImage;
@property (nonatomic, readonly) _Bool representsFinalProcessedVideo;

- (id)description;
- (id)initWithIdentifier:(id)arg1 allExpectedResultSpecifiers:(id)arg2 resultSpecifiers:(unsigned long long)arg3;

@end
