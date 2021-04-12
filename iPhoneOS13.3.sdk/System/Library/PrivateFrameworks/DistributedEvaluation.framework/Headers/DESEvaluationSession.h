//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DESRecordSet, DESServiceConnection, NSString, NSURL, NSURLSession;
@protocol DESRecipeEvaluation, OS_dispatch_queue;

@interface DESEvaluationSession : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    DESServiceConnection *_serviceConnection;
    DESRecordSet *_recordSet;
    NSString *_recipeType;
    NSString *_localeIdentifier;
    NSString *_deviceIdentifier;
    NSURL *_baseURL;
    NSURL *_postbackBaseURL;
    id <DESRecipeEvaluation> _evaluator;
    NSUInteger _recipeCountLimit;
    double _timeLimit;
    BOOL _skipPolicy;
    BOOL _enableOriginReturnRoute;
    BOOL _enableParsecReturnRoute;
    NSURLSession *_session;
}

+ (void)downloadAttachments:(id)arg1 session:(id)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
+ (id)downloadedRecipeWithID:(id)arg1 recipeType:(id)arg2 baseURL:(id)arg3 protocolClass:(Class)arg4 error:(id )arg5;
+ (void)initialize;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)runWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_ensureEvaluatorWithError:(id )arg1;
- (void)_sendRecipeResponseWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)sendRecipeResponseWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (id)_requestObjectWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5;
- (void)postRecipeResponse:(id)arg1 recipeId:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_downloadAttachments:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_handleRecipeResponse:(id)arg1 recipeId:(id)arg2 matchingRecordSet:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)taskIsDeferred;
- (void)_fetchRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_attemptRecipeMatchWithRecipes:(id)arg1 keepGoing:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) BOOL isPFLPlugin;
- (void)_handleTelemetry:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)telemetryResponse;
- (void)_fetchPolicyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_runPOSTRequestWithHTTPBody:(id)arg1 contentType:(id)arg2 URL:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_runJSONOrMultipartPOSTRequest:(id)arg1 path:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_runJSONGETRequestWithPath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_parsecReturnRouteEnabled;
- (BOOL)_originReturnRouteEnabled;
- (id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 deviceIdentifier:(id)arg6 evaluatorOverride:(id)arg7 protocolClass:(Class)arg8;
- (id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 evaluatorOverride:(id)arg6 protocolClass:(Class)arg7;
- (id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 evaluatorOverride:(id)arg6;

@end

