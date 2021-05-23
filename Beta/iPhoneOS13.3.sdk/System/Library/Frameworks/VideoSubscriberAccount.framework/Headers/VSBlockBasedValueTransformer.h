/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSValueTransformer.h>

@interface VSBlockBasedValueTransformer : NSValueTransformer

{
    CDUnknownBlockType _transformationBlock;
    CDUnknownBlockType _reverseTransformationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType transformationBlock;
@property (copy, nonatomic) CDUnknownBlockType reverseTransformationBlock;

- (id)init;
- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
