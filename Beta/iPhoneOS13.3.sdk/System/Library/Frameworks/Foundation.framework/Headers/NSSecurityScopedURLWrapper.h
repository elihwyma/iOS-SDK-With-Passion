/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface NSSecurityScopedURLWrapper : NSObject <Swift>

{
    _Bool _readonly;
    _Bool _backedByFileProvider;
    NSData *_scope;
    NSURL *_url;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
    NSString *_itemIdentifier;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly, getter=isReadonly) _Bool readonly;
@property (nonatomic, readonly, getter=isBackedByFileProvider) _Bool backedByFileProvider;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSData *_scope;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 extensionClass:(id)arg3;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 scope:(id)arg3;

@end
