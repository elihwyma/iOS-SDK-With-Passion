/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISHintedValue : NSObject

{
    unsigned long long _options;
    NSMutableArray *_dimensions;
    NSMutableArray *_values;
}

@property (readonly) NSMutableArray *dimensions;
@property (readonly) NSMutableArray *values;
@property unsigned long long options;

- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (long long)indexForSize:(struct CGSize)arg1;
- (id)hintedValueForIndex:(long long)arg1;
- (void)addHintedValue:(id)arg1 forSize:(struct CGSize)arg2;
- (id)hintedValueForSize:(struct CGSize)arg1;
- (_Bool)sizeOutsideHintedRange:(struct CGSize)arg1;
- (double)scaleFactorForSize:(struct CGSize)arg1;
- (double)interpolationFactorForSize:(struct CGSize)arg1;

@end
