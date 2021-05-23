/*
 Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

#import <Foundation/NSObject.h>

@interface CKContextRequest : NSObject

+ (void)initialize;
+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)_xpcConnection;
+ (void)statusWithReply:(CDUnknownBlockType)arg1;
+ (id)requestServiceSemaphore;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
+ (void)runOffMainThread:(CDUnknownBlockType)arg1;
+ (void)warmUpForRequestType:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)portraitBlacklistWithReply:(CDUnknownBlockType)arg1;
+ (id)_newXpcConnection;
+ (void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(_Bool)arg4 inputLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
+ (void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
+ (void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5;
+ (id)trimTextToSize:(id)arg1;
+ (void)setDefaultRequestType:(unsigned long long)arg1;
+ (void)findResultsForText:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(CDUnknownBlockType)arg3;
+ (void)prepareRequestForText:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)findResponseByID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (id)requestWithText:(id)arg1;
+ (_Bool)pingService;
+ (_Bool)shutdownService;
+ (id)frameworkStartDate;

@end
