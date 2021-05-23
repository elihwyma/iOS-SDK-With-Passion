/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SSDownloadPolicy : NSObject

{
    long long _bagType;
    NSString *_downloadKind;
    NSMutableArray *_policyRules;
}

@property (nonatomic, readonly) NSString *downloadKind;
@property (nonatomic, readonly) long long URLBagType;
@property (copy, nonatomic) NSArray *policyRules;
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
- (id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithNetworkConstraints:(id)arg1;
- (void)unionPolicyRule:(id)arg1;
- (void)unionNetworkConstraints:(id)arg1;
- (id)_policyRuleForSizeLimit:(long long)arg1;
- (void)setPolicyRule:(id)arg1;

@end
