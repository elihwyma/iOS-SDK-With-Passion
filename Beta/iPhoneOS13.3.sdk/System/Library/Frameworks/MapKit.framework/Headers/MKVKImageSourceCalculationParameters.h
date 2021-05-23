/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKVKImageSourceCalculationParameters : NSObject

{
    NSArray *_imageSourceKeys;
    double _scale;
}

@property (copy, nonatomic, readonly) NSArray *imageSourceKeys;
@property (nonatomic, readonly) double scale;

- (id)initWithImageSourceKeys:(id)arg1 scale:(double)arg2;

@end
