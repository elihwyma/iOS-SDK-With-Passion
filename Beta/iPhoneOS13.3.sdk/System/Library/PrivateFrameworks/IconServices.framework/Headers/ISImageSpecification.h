/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISImageSpecification : NSObject

{
    double _scale;
    ISImageSpecification *_smallerSpecification;
    ISImageSpecification *_largerSpecification;
    struct CGSize _size;
}

@property (readonly) struct CGSize size;
@property (readonly) double scale;
@property (readonly) ISImageSpecification *smallerSpecification;
@property (readonly) ISImageSpecification *largerSpecification;

- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)setLargerSpecification:(id)arg1;
- (void)setSmallerSpecification:(id)arg1;

@end
