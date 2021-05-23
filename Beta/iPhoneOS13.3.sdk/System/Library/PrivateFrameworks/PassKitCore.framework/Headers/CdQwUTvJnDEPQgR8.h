/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSError, NSMutableDictionary, NSString, jprL7AuZZkLkFoBK;

@protocol OS_dispatch_queue;

@interface CdQwUTvJnDEPQgR8 : NSObject

{
    _Bool _callbackDone;
    _Bool _prepared;
    NSMutableDictionary *_identifier2UUID;
    jprL7AuZZkLkFoBK *_context;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_callback_queue;
    NSObject<OS_dispatch_queue> *_score_id_queue;
    NSString *_lastScoreIdentifier;
    NSError *_prepareError;
}

@property (retain, nonatomic) jprL7AuZZkLkFoBK *context;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *score_id_queue;
@property (retain, nonatomic) NSString *lastScoreIdentifier;
@property (retain, nonatomic) NSError *prepareError;

+ (id)scorerWithContext:(id)arg1;

- (void)stop;
- (id)initWithContext:(id)arg1;
- (void)prepareScoreMessage;
- (void)scoreWithScoreRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)settingsFromContext:(id)arg1;
- (void)_safeCallbackWithMessage:(id)arg1 uuid:(id)arg2 error:(id)arg3;
- (id)VkBISyFszEu5z9lr:(id)arg1 error:(id *)arg2;

@end
