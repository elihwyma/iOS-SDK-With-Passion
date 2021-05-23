/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface CTRadioAccessTechnology : NSObject

{
    CTTelephonyNetworkInfo *_networkInfo;
}

@property (readonly) NSString *radioAccessTechnology;

- (id)init;
- (void)dealloc;
- (id)initWithCTTelephonyNetworkInfo:(id)arg1;

@end
