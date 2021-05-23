/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface PKPaymentSetupProductConfiguration : NSObject

{
    NSString *_partnerIdentifier;
    NSString *_productIdentifier;
    unsigned long long _type;
    unsigned long long _state;
    NSString *_dirtyStateIdentifier;
    NSDate *_lastUpdated;
    unsigned long long _featureIdentifier;
}

@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *dirtyStateIdentifier;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long featureIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductDictionary:(id)arg1;

@end
