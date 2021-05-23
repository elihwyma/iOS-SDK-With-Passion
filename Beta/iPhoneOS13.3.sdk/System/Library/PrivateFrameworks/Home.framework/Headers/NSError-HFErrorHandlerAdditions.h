/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSError.h>

@interface NSError (HFErrorHandlerAdditions)

@property (nonatomic, readonly) _Bool hf_isHomeKitNamingError;
@property (nonatomic, readonly) _Bool hf_isHomeKitUnreachableError;

+ (id)hf_errorWithCode:(long long)arg1;
+ (id)hf_errorWithCode:(long long)arg1 operation:(id)arg2 options:(id)arg3;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2 arguments:(char *)arg3;
+ (id)hf_internalErrorWithDescription:(id)arg1;

- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;
- (_Bool)hf_isHMErrorWithCodePrivate:(long long)arg1;
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;
- (_Bool)hf_isHFErrorWithCode:(long long)arg1;
- (_Bool)hf_isHMErrorWithCode:(long long)arg1;

@end
