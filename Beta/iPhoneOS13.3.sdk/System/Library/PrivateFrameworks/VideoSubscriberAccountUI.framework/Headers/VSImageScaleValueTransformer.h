/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSImageScaleValueTransformer : NSValueTransformer

{
    struct CGSize _preferredSize;
}

@property (nonatomic) struct CGSize preferredSize;

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;

@end
