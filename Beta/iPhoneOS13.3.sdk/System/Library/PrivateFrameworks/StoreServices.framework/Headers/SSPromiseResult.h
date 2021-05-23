/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface SSPromiseResult : NSObject

{
    NSError *_error;
    id _result;
}

@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) id result;

- (id)initWithResult:(id)arg1 error:(id)arg2;

@end
