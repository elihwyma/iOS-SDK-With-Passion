/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface KCPairingChannelContext : NSObject

{
    NSString *_model;
    NSString *_modelVersion;
    NSString *_modelClass;
    NSString *_osVersion;
    NSString *_uniqueDeviceID;
    NSString *_uniqueClientID;
    NSString *_intent;
}

@property (retain) NSString *model;
@property (retain) NSString *modelVersion;
@property (retain) NSString *modelClass;
@property (retain) NSString *osVersion;
@property (retain) NSString *uniqueDeviceID;
@property (retain) NSString *uniqueClientID;
@property (retain) NSString *intent;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
