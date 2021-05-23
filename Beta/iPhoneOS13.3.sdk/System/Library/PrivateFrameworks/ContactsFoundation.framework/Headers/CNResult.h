/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNEither, NSError;

@interface CNResult : NSObject

{
    CNEither *_either;
}

@property (readonly) CNEither *either;
@property (readonly) id value;
@property (copy, readonly) NSError *error;
@property (readonly) _Bool isSuccess;
@property (readonly) _Bool isFailure;

+ (id)resultWithFuture:(id)arg1;
+ (id)successWithValue:(id)arg1;
+ (id)failureWithError:(id)arg1;
+ (id)resultWithValue:(id)arg1 orError:(id)arg2;
+ (id)resultWithBlock:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)initWithValue:(id)arg1 error:(id)arg2;
- (id)valueWithError:(id *)arg1;

@end
