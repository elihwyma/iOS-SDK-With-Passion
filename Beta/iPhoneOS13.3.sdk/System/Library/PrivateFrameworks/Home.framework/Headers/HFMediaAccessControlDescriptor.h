/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject <Swift>

{
    _Bool _accessRequiresPassword;
    unsigned long long _access;
    NSString *_accessPassword;
}

@property (nonatomic, readonly) unsigned long long access;
@property (nonatomic, readonly) _Bool accessSupportsPassword;
@property (nonatomic, readonly) _Bool accessRequiresPassword;
@property (copy, nonatomic, readonly) NSString *accessPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;
+ (_Bool)accessClassificationSupportsPassword:(unsigned long long)arg1;
+ (id)defaultAccessControl;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;

@end
