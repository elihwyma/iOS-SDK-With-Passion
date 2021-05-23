/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AMSPromiseResult : NSObject

{
    NSError *_error;
    id _result;
}

@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) id result;

- (id)initWithResult:(id)arg1 error:(id)arg2;

@end
