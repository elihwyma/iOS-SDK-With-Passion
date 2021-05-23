/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableSet, NSURLSessionDataTask;

@interface PKObjectDownload : NSObject

{
    NSMutableSet *_completionHandlers;
    NSURLSessionDataTask *_task;
}

@property (retain, nonatomic) NSMutableSet *completionHandlers;
@property (copy, nonatomic) NSURLSessionDataTask *task;

- (id)init;

@end
