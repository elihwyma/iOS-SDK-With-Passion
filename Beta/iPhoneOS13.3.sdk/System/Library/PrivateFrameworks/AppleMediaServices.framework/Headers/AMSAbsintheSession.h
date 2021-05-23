/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAbsintheSession : NSObject

{
    struct PSCSessionInternal_ *_sessionRef;
    NSString *_servKey;
}

@property (nonatomic) struct PSCSessionInternal_ *sessionRef;
@property (retain, nonatomic) NSString *servKey;

+ (id)defaultSession;

- (id)init;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (_Bool)clearSession;
- (_Bool)_prepareContextWithBag:(id)arg1 error:(id *)arg2;
- (_Bool)verifyData:(id)arg1 bag:(id)arg2 error:(id *)arg3;

@end
