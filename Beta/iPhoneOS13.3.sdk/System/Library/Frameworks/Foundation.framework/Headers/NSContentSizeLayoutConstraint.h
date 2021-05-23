/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint

{
    double _huggingPriority;
    double _compressionResistancePriority;
}

@property (readonly) double huggingPriority;
@property (readonly) double compressionResistancePriority;

- (double)priorityForVariable:(id)arg1;
- (id)_priorityDescription;
- (id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5;

@end
