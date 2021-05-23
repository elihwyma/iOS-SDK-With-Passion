/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (SafariCoreExtras)

@property (copy, nonatomic, readonly) NSString *safari_privacyPreservingDescription;
@property (nonatomic, readonly) _Bool safari_isSQLiteError;
@property (nonatomic, readonly) _Bool safari_isSQLiteCorruptionError;

+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;

- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (_Bool)safari_isClientSideNetworkError;

@end
