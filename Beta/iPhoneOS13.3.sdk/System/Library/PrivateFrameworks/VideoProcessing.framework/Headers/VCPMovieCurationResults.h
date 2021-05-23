/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PHAsset;

@interface VCPMovieCurationResults : NSObject

{
    PHAsset *_phAsset;
    NSMutableArray *_highlights;
}

@property (nonatomic, readonly) PHAsset *phAsset;
@property (retain, nonatomic, readonly) NSMutableArray *highlights;

- (id)initWithPHAsset:(id)arg1;

@end
