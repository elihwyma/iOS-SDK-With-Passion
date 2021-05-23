/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface SBKResponseStatus : NSObject

{
    _Bool _isRecoverable;
    _Bool _isError;
    _Bool _shouldFileRadar;
    _Bool _isPuntedError;
    long long _statusCode;
    NSString *_consoleDescription;
}

@property (readonly) long long statusCode;
@property (copy, readonly) NSString *consoleDescription;
@property (readonly) NSError *requestError;
@property (readonly) _Bool isSuccess;
@property (readonly) _Bool isRecoverable;
@property (readonly) _Bool isError;
@property (readonly) _Bool shouldFileRadar;
@property (readonly) _Bool isGenericError;
@property (readonly) _Bool isUnsupportedClient;
@property (readonly) _Bool isAuthenticationError;
@property (readonly) _Bool isValidationError;
@property (readonly) _Bool isPuntedError;

+ (id)responseStatusForStatusCodeNumber:(id)arg1;

- (id)initWithStatus:(long long)arg1 isRecoverable:(_Bool)arg2 isError:(_Bool)arg3 consoleDescription:(id)arg4 shouldFileRadar:(_Bool)arg5;

@end
