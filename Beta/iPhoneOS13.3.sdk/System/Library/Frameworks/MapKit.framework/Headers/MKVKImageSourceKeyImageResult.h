/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKVKImageSourceCalculationParameters, NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKVKImageSourceKeyImageResult : NSObject

{
    NSMutableArray *_mutableFullBleedColors;
    _Bool _sameFullBleedColors;
    MKVKImageSourceCalculationParameters *_parameters;
    NSMutableArray *_triedKeys;
    NSMutableArray *_mutableImages;
    NSMutableSet *_imageDatas;
}

@property (retain, nonatomic) NSMutableArray *triedKeys;
@property (retain, nonatomic) NSMutableArray *mutableImages;
@property (retain, nonatomic) NSMutableSet *imageDatas;
@property (nonatomic, readonly) MKVKImageSourceCalculationParameters *parameters;
@property (nonatomic, readonly) NSArray *fullBleedColors;
@property (nonatomic, readonly, getter=hasSameFullBleedColors) _Bool sameFullBleedColors;
@property (nonatomic, readonly) NSArray *images;

- (id)initWithParameters:(id)arg1;
- (void)addFullBleedColor:(id)arg1;

@end
