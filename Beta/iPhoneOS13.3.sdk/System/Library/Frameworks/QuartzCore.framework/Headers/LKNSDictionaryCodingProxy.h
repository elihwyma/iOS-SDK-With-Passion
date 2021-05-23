/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CACodingProxy.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LKNSDictionaryCodingProxy : CACodingProxy

{
    NSDictionary *_dict;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodedObject;

@end
