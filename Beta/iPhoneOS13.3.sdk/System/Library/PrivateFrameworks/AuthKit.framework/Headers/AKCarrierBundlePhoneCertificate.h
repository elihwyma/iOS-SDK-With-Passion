/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AKCarrierBundlePhoneCertificate : NSObject

{
    NSString *_phoneCertificate;
    long long _slotID;
}

@property (retain, nonatomic) NSString *phoneCertificate;
@property (nonatomic) long long slotID;

@end
