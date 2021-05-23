/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@interface _TRUserNotification : NSObject

{
    int _response;
    struct __CFUserNotification *_userNotification;
    unsigned long long _responseFlags;
}

@property (nonatomic, readonly) struct __CFUserNotification *CFUserNotification;
@property (nonatomic, readonly) int response;
@property (nonatomic, readonly) unsigned long long responseFlags;
@property (nonatomic, readonly) _Bool didAccept;

+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;
+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(_Bool)arg5 dismissOnUnlock:(_Bool)arg6;

- (void)dealloc;
- (void)cancel;
- (void)show;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)textFieldValueAtIndex:(unsigned long long)arg1;

@end
