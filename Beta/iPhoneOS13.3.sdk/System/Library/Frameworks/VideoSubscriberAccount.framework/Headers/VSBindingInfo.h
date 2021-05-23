/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSValueTransformer;

__attribute__((visibility("hidden")))
@interface VSBindingInfo : NSObject

{
    id _unsafeObservedObject;
    id _weakObservedObject;
    NSString *_keyPath;
    NSDictionary *_options;
    NSValueTransformer *_valueTransformer;
}

@property (retain, nonatomic) NSValueTransformer *valueTransformer;
@property (nonatomic, readonly) id unsafeObservedObject;
@property (weak, nonatomic, readonly) id weakObservedObject;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) NSDictionary *options;
@property (retain, nonatomic) id value;

- (id)init;
- (void)requireExpectedConcurrency;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 options:(id)arg3;

@end
