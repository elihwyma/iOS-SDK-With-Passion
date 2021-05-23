/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUValueFilter : NSObject

{
    double _currentValue;
}

@property (nonatomic) double currentValue;

- (id)init;
- (void)setInputValue:(double)arg1;
- (id)initWithValue:(double)arg1;
- (double)outputValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
