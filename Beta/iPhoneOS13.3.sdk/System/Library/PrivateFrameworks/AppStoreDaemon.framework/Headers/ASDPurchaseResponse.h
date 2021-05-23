/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray;

@interface ASDPurchaseResponse : ASDRequestResponse <Swift>

{
    NSArray *_items;
}

@property (readonly) NSArray *items;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseResponseItems:(id)arg1;

@end
