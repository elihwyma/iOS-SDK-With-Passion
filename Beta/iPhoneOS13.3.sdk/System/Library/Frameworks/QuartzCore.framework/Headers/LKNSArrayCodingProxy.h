/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CACodingProxy.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface LKNSArrayCodingProxy : CACodingProxy

{
    NSArray *_array;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodedObject;

@end
