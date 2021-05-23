/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKLabelExternalIconElement : NSObject

{
    struct LabelExternalIconElement _element;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const struct LabelExternalIconElement *)element;
- (id).cxx_construct;
- (id)initWithIconElement:(const struct LabelExternalIconElement *)arg1;

@end
