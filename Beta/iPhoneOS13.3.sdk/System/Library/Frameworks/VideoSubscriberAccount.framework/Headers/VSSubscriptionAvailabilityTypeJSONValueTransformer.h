/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionAvailabilityTypeJSONValueTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
