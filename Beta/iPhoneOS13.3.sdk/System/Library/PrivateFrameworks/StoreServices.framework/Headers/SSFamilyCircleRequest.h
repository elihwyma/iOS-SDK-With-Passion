/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSFamilyCircleRequest : SSRequest

{
    long long _authenticationPromptStyle;
    _Bool _fetchITunesAccountNames;
}

@property (nonatomic) long long authenticationPromptStyle;
@property (nonatomic) _Bool fetchITunesAccountNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

@end
