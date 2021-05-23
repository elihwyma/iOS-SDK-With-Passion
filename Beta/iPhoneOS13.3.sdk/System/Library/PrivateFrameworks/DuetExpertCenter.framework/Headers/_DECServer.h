/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, _DECPredictionCache, _DECServerResponder;

@protocol OS_dispatch_queue;

@interface _DECServer : NSObject

{
    _DECServerResponder *_responder;
    _DECPredictionCache *_resultCache;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _categories;
    long long _type;
    struct NSString *_identifier;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) unsigned long long categories;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSXPCConnection *connection;

+ (id)_defaultRestorationDirectory;
+ (id)serverWithConnection:(id)arg1 responder:(id)arg2;

- (void)invalidate;
- (void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(struct NSString *)arg3 reply:(CDUnknownBlockType)arg4;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;
- (void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithConnection:(id)arg1 responder:(id)arg2;
- (void)_filterPrediction:(id)arg1 forConsumer:(unsigned long long)arg2;
- (id)_restorationPath;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
