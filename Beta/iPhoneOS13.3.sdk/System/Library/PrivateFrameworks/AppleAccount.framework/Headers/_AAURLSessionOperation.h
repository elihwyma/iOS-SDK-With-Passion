/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface _AAURLSessionOperation : NSObject

{
    NSMutableData *_mutableData;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType completion;
@property (copy, nonatomic, readonly) NSData *data;

+ (id)operationWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (void)appendData:(id)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2;

@end
