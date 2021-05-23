/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AMSXDDevice : NSObject

{
    NSString *_identifier;
    long long _type;
}

@property (nonatomic, readonly) NSDictionary *JSONDictionary;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)allPairedDevices;
+ (id)activePairedDevices;
+ (id)deviceFromIdentifier:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithDeviceID:(id)arg1 type:(long long)arg2;

@end
