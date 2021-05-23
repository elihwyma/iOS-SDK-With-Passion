/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFPeerDevice : NSObject

{
    _Bool _defaultPairedDevice;
    _Bool _validKey;
    NSString *_uniqueID;
    NSString *_modelIdentifier;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_name;
    NSString *_deviceColor;
    NSString *_enclosureColor;
    long long _keyCounter;
}

@property (copy) NSString *uniqueID;
@property (copy) NSString *modelIdentifier;
@property (copy) NSString *productName;
@property (copy) NSString *productVersion;
@property (copy) NSString *productBuildVersion;
@property (copy) NSString *name;
@property (copy) NSString *deviceColor;
@property (copy) NSString *enclosureColor;
@property (getter=isDefaultPairedDevice) _Bool defaultPairedDevice;
@property _Bool validKey;
@property long long keyCounter;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
