/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface PLResult : NSObject

{
    id _result;
    NSError *_error;
}

@property (readonly) id result;
@property (copy, readonly) NSError *error;
@property (readonly) _Bool isSuccess;
@property (readonly) _Bool isFailure;

+ (id)failureWithError:(id)arg1;
+ (id)successWithResult:(id)arg1;

- (id)description;
- (id)resultWithError:(id *)arg1;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end
