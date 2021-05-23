/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, JSManagedValue, NSArray, NSMutableArray, NSNumber, NSString;

@interface IKScriptsEvaluator : NSObject

{
    _Bool _isJingleRequest;
    NSArray *_scripts;
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    NSMutableArray *_records;
    NSString *_identifier;
}

@property (nonatomic) _Bool isJingleRequest;
@property (retain, nonatomic) NSArray *scripts;
@property (weak, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) JSManagedValue *callback;
@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)evaluate;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(_Bool)arg4;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(_Bool)arg3;
- (void)scriptDidLoadWithID:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)handleScirptLoadFailure;
- (void)evaluateScripts;
- (void)parseScriptData:(id)arg1 successPredicate:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;

@end
