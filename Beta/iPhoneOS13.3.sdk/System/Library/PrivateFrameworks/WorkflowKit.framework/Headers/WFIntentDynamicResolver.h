/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class INCExtensionConnection, NSMutableSet, NSString;

@protocol INCExtensionProxy, WFIntentDynamicResolverDataSource;

@interface WFIntentDynamicResolver : NSObject

{
    NSString *_intentKeyPathToResolve;
    unsigned long long _state;
    id <WFIntentDynamicResolverDataSource> _dataSource;
    INCExtensionConnection *_extensionConnection;
    id <INCExtensionProxy> _extensionProxy;
    NSMutableSet *_activeRequests;
}

@property (nonatomic, readonly) INCExtensionConnection *extensionConnection;
@property (nonatomic, readonly) id <INCExtensionProxy> extensionProxy;
@property (retain, nonatomic) NSMutableSet *activeRequests;
@property (copy, nonatomic, readonly) NSString *intentKeyPathToResolve;
@property (nonatomic, readonly) unsigned long long state;
@property (weak, nonatomic, readonly) id <WFIntentDynamicResolverDataSource> dataSource;

- (void)failWithError:(id)arg1;
- (void)endSession;
- (id)intent;
- (id)initWithIntentKeyPathToResolve:(id)arg1 dataSource:(id)arg2;
- (void)beginSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)resolveWithUserInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)populatedSkeletonIntentWithUserInput:(id)arg1 forKeyPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
