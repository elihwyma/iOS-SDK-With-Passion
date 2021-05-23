/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTCarrier : NSObject

{
    NSString *_carrierName;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_isoCountryCode;
    _Bool _allowsVOIP;
}

@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (nonatomic) _Bool allowsVOIP;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
