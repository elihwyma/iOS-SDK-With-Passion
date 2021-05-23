/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKLabelExternalTextElement : NSObject

{
    struct LabelExternalTextElement _element;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const struct LabelExternalTextElement *)element;
- (id).cxx_construct;
- (id)initWithTextElement:(const struct LabelExternalTextElement *)arg1;

@end
