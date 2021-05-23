/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface _SFKeychainFetchResult : NSObject

{
    id _keychainFetchResultInternal;
}

@property (readonly) long long resultType;
@property (readonly) id value;
@property (readonly) NSError *error;

+ (id)fetchResultWithValue:(id)arg1;
+ (id)fetchResultWithError:(id)arg1;

- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
