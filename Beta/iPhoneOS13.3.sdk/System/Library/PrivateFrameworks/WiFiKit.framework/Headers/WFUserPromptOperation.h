/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSDictionary;

@interface WFUserPromptOperation : WFOperation

{
    long long _result;
    NSDictionary *_userResponse;
    NSDictionary *_options;
    double _timeout;
    unsigned long long _flags;
}

@property (nonatomic) long long result;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) NSDictionary *userResponse;

+ (id)sharedMapTable;

- (void)start;
- (id)initWithOptions:(id)arg1 timeout:(double)arg2 flags:(unsigned long long)arg3;
- (id)initWithOptions:(id)arg1 timeout:(double)arg2;
- (void)_showPrompt;
- (void)_notification:(struct __CFUserNotification *)arg1 didFinishWithResponse:(unsigned long long)arg2;

@end
