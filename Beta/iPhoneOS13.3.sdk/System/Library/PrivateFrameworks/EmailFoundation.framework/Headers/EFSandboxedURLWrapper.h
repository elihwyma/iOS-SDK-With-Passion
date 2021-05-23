/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, _EFInvokeOnDeallocToken;

@interface EFSandboxedURLWrapper : NSObject

{
    NSURL *_url;
    _EFInvokeOnDeallocToken *_invocable;
    NSString *_sandboxToken;
}

@property (nonatomic, readonly) _EFInvokeOnDeallocToken *invocable;
@property (nonatomic, readonly) NSString *sandboxToken;
@property (readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;
+ (id)log;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;

@end
