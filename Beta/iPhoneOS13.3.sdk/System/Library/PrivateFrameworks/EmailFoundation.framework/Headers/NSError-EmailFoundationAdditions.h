/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (EmailFoundationAdditions)

@property (nonatomic, readonly) _Bool ef_isCancelledError;
@property (nonatomic, readonly) _Bool ef_isTimeoutError;
@property (nonatomic, readonly) _Bool ef_isNotSupportedError;
@property (nonatomic, readonly) _Bool ef_isConnectionInterruptedError;
@property (nonatomic, readonly) _Bool ef_isTemporarilyUnavailableError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (id)ef_connectionInterruptedError;
+ (void)ef_setDecoder:(CDUnknownBlockType)arg1 forDomain:(id)arg2;
+ (id)ef_SQLiteErrorWithCode:(int)arg1;
+ (id)ef_timeoutError;
+ (id)ef_cancelledError;
+ (id)ef_notSupportedError;
+ (id)ef_temporarilyUnavailableError;

- (CDUnknownBlockType)ef_match;

@end
