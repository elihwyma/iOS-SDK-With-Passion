/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSValueTransformer.h>

@interface VSReverseValueTransformer : NSValueTransformer

{
    NSValueTransformer *_valueTransformer;
}

@property (retain, nonatomic) NSValueTransformer *valueTransformer;

+ (id)reverseValueTransformerWithValueTransformer:(id)arg1;

- (id)init;
- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)initWithValueTransformer:(id)arg1;

@end
