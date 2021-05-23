/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETrainingContext.h>

@class NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface _RELocalTrainingContext : RETrainingContext

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnection:(id)arg1;
- (void)_handleInvalidation;
- (void)_configureForRelevanceEngine:(id)arg1;
- (id)_elementRelevanceEngine;
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
