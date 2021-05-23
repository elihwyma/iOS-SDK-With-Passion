/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString;

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions

{
    _Bool _skipDownloads;
    NSNumber *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_itemIdentifier;
    long long _requestType;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic, readonly) _Bool skipDownloads;
@property (nonatomic) long long requestType;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(_Bool)arg5;

@end
