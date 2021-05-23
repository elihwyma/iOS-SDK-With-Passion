/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSError.h>

@class NSArray, NSString;

@interface NSError (HMFError)

@property (nonatomic, readonly, getter=isHMFError) _Bool hmfError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmf_errorWithException:(id)arg1;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)hmf_unarchiveFromData:(id)arg1 error:(id *)arg2;
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3;
+ (id)hmfErrorWithCode:(long long)arg1;

@end
