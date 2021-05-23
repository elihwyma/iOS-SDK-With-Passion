/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSError, NSString, UNUserNotificationCenter;

@protocol OS_dispatch_queue;

@interface CUUserNotificationSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSString *_requestIdentifier;
    int _state;
    NSError *_stepError;
    int _stepState;
    UNUserNotificationCenter *_unCenter;
    struct LogCategory *_ucat;
    unsigned int _flags;
    CDUnknownBlockType _actionHandler;
    NSString *_bodyKey;
    NSArray *_bodyArguments;
    NSString *_bundleID;
    NSString *_categoryID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_header;
    NSString *_identifier;
    NSString *_label;
    long long _soundAlertType;
    NSString *_subtitleKey;
    NSArray *_subtitleArguments;
    NSString *_titleKey;
    NSArray *_titleArguments;
}

@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (copy, nonatomic) NSString *bodyKey;
@property (copy, nonatomic) NSArray *bodyArguments;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long soundAlertType;
@property (copy, nonatomic) NSString *subtitleKey;
@property (copy, nonatomic) NSArray *subtitleArguments;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSArray *titleArguments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_run;
- (void)_reportError:(id)arg1;
- (_Bool)_runInit:(id *)arg1;
- (void)_runAuthorizeCheckStart;
- (void)_runAuthorizeRequestStart;
- (_Bool)_runRequestAddStart:(id *)arg1;
- (_Bool)_runResponse:(id)arg1 error:(id *)arg2;

@end
