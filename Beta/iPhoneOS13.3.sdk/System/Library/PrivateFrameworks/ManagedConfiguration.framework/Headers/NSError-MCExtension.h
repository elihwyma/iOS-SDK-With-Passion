/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSError.h>

@interface NSError (MCExtension)

+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;

- (id)MCVerboseDescription;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCCopyAsPrimaryError;
- (_Bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;
- (id)MCErrorType;

@end
