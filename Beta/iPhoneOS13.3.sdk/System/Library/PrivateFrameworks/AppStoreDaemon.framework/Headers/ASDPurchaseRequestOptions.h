/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDPurchaseRequestOptions : ASDRequestOptions

{
    NSArray *_purchases;
}

@property (nonatomic, readonly) NSArray *purchases;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchases:(id)arg1;

@end
