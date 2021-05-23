/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AMSFailingBagValue : AMSFrozenBagValue

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

- (void)valueWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;

@end
