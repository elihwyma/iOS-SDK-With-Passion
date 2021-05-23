/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_group;

@interface FCOperationExternalSignal : NSObject

{
    _Bool _result;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (void)triggerWithRetry:(_Bool)arg1;

@end
