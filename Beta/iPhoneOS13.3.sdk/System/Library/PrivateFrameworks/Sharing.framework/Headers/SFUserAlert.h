/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFUserAlert : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct __CFUserNotification *_cfNotif;
    NSXPCConnection *_xpcCnx;
    struct __CFRunLoopSource *_runLoopSrc;
    _Bool _asBanner;
    _Bool _textInput;
    _Bool _hasDefaultButton;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _textResponseHandler;
    CDUnknownBlockType _dictionaryResponseHandler;
    NSDictionary *_additionalInfo;
    NSURL *_iconURL;
    NSString *_message;
    NSURL *_soundURL;
    NSString *_textInputTitle;
    double _timeout;
    NSString *_title;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (copy, nonatomic) CDUnknownBlockType textResponseHandler;
@property (copy, nonatomic) CDUnknownBlockType dictionaryResponseHandler;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (nonatomic) _Bool asBanner;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSURL *soundURL;
@property (nonatomic) _Bool textInput;
@property (retain, nonatomic) NSString *textInputTitle;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool hasDefaultButton;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (retain, nonatomic) NSString *otherButtonTitle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)present;
- (void)_present;
- (void)_ensureXPCStarted;
- (void)userNotificationError:(id)arg1;
- (void)userNotificationResponse:(int)arg1;
- (void)userNotificationTextResponse:(id)arg1;
- (void)userNotificationDictionaryResponse:(id)arg1;
- (void)_presentBanner;
- (struct __CFUserNotification *)createNotification;
- (void)_postNotification:(struct __CFUserNotification *)arg1;
- (id)_mergedDict;
- (id)_defaultDictionary;
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;
- (void)_updateNotification;

@end
