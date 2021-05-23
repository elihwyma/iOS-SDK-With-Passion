/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@interface SKProductSubscriptionPeriod : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) unsigned long long numberOfUnits;
@property (nonatomic, readonly) unsigned long long unit;

- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithISO8601String:(id)arg1;
- (void)_setNumberOfUnits:(unsigned long long)arg1;
- (void)_setUnit:(unsigned long long)arg1;

@end
