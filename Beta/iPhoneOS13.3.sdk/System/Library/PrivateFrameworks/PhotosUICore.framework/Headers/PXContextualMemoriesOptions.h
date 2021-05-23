/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PXContextualMemoriesOptions : NSObject

{
    double _accuracy;
    NSDate *_peopleProximityDate;
}

@property (nonatomic) double accuracy;
@property (retain, nonatomic) NSDate *peopleProximityDate;

- (id)init;

@end
