/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSValueTransformer.h>

@interface VSFailableValueTransformer : NSValueTransformer

{
    NSValueTransformer *_objectValueTransformer;
}

@property (retain, nonatomic) NSValueTransformer *objectValueTransformer;

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;

@end
