/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPDevice, NSDictionary, NSString, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject

{
    _Bool _userDidCancel;
    _Bool _userDidReset;
    unsigned long long _secretType;
    CDPDevice *_device;
    NSString *_validSecret;
    NSDictionary *_recoveredInfo;
    OTClique *_recoveredClique;
}

@property (nonatomic) unsigned long long secretType;
@property (nonatomic) _Bool userDidCancel;
@property (nonatomic) _Bool userDidReset;
@property (copy, nonatomic) CDPDevice *device;
@property (copy, nonatomic) NSString *validSecret;
@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (retain, nonatomic) OTClique *recoveredClique;

@end
