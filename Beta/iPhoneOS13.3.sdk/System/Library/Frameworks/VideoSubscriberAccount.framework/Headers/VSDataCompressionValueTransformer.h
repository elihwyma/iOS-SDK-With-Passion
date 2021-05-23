/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSDataCompressionValueTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)_dataByPerformingOperation:(int)arg1 onData:(id)arg2;

@end
