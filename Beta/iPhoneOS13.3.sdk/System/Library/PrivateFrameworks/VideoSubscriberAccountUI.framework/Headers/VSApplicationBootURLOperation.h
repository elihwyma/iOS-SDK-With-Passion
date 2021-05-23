/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, NSURL, VSFailable, VSPreferences;

__attribute__((visibility("hidden")))
@interface VSApplicationBootURLOperation : VSAsyncOperation

{
    _Bool _isDeveloper;
    NSURL *_url;
    VSFailable *_urlOrError;
    VSPreferences *_preferences;
}

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) _Bool isDeveloper;
@property (retain, nonatomic) VSFailable *urlOrError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)executionDidBegin;
- (id)initWithBootURL:(id)arg1 isDeveloper:(_Bool)arg2;
- (id)generateTempFilePath;
- (_Bool)verifyExtendedValidationWithTrust:(struct __SecTrust *)arg1;

@end
