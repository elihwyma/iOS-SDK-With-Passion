/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface SSDownloadPolicyApplicationState : NSObject

{
    NSString *_applicationIdentifier;
    NSSet *_applicationStates;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSSet *applicationStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithApplicationIdentifier:(id)arg1;
- (void)addApplicationState:(long long)arg1;
- (void)setNotRunningApplicationStates;

@end
