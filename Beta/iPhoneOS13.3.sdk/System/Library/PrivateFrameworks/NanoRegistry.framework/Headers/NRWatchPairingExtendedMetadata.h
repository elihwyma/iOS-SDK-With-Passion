/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <Swift>

{
    _Bool _postFailsafeObliteration;
    long long _chipID;
    NSString *_productType;
}

@property (nonatomic) long long chipID;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) _Bool postFailsafeObliteration;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
