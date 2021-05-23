/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol CKSMSCompose;

__attribute__((visibility("hidden")))
@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject

{
    NSMutableArray *_queuedInvocations;
    id <CKSMSCompose> _serviceViewControllerProxy;
}

@property (retain, nonatomic) NSMutableArray *queuedInvocations;
@property (retain, nonatomic) id <CKSMSCompose> serviceViewControllerProxy;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
