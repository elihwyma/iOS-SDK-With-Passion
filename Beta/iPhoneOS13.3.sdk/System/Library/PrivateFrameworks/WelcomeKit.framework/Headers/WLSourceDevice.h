/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLSourceDevice : NSObject

{
    _Bool _isLocal;
    unsigned short _socketPort;
    unsigned short _httpPort;
    NSString *_ipAddress;
    NSString *_persistentIdentifier;
    NSString *_name;
    NSString *_osAPIVersion;
    NSString *_hardwareBrand;
    NSString *_hardwareModel;
    NSString *_hardwareDesign;
    NSString *_hardwareMaker;
    NSString *_hardwareProduct;
}

@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) unsigned short socketPort;
@property (nonatomic) unsigned short httpPort;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) _Bool isLocal;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *osAPIVersion;
@property (copy, nonatomic) NSString *hardwareBrand;
@property (copy, nonatomic) NSString *hardwareModel;
@property (copy, nonatomic) NSString *hardwareDesign;
@property (copy, nonatomic) NSString *hardwareMaker;
@property (copy, nonatomic) NSString *hardwareProduct;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
