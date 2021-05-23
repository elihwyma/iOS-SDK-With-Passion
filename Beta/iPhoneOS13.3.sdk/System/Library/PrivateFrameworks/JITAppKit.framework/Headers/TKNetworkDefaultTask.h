/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class MCLURLDataLoaderTask, NSString;

@interface TKNetworkDefaultTask : NSObject

{
    MCLURLDataLoaderTask *_task;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithTask:(id)arg1;

@end
