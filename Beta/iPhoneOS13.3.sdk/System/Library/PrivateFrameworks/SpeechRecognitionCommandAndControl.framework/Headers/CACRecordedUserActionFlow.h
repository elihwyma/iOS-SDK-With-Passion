/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CACRecordedUserActionFlow : NSObject

{
    NSArray *_tasks;
    NSDictionary *_environmentSettings;
    NSMutableDictionary *_orignalEnvironmentSettings;
    long long _executingTaskIndex;
    _Bool _skipNextAction;
    _Bool _isExecuting;
    _Bool _isCancelled;
    NSString *_identifier;
}

@property (retain) NSString *identifier;
@property (readonly) NSArray *userActions;
@property _Bool skipNextAction;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActions:(id)arg1;
- (void)beginExecutingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelExecution;
- (id)plistDescription;
- (_Bool)doesNextSpokenCommandMatchIdentifier:(id)arg1;
- (void)_configureEnvironment;
- (void)_executeNextActionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_exitFlowWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_restoreEnvironment;

@end
