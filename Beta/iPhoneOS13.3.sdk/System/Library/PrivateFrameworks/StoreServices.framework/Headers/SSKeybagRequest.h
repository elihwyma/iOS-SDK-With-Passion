/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest

{
    NSNumber *_accountID;
    id _contentIdentifier;
    long long _options;
}

@property (readonly) NSNumber *accountID;
@property (copy) id contentIdentifier;
@property long long keybagOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)accountIdentifier;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
