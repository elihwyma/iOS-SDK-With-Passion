/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <PipelineKit/PIURLSessionOperationSubclass.h>

#import <PipelineKit/Swift-Protocol.h>

@class NSString;

@interface PIURLDataOperation : PIURLSessionOperationSubclass <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)operationWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

- (void)execute;

@end
