/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString, RTTTelephonyUtilities;

@interface _CNUIRTTUtilities : NSObject

{
    RTTTelephonyUtilities *_utilityProvider;
}

@property (retain, nonatomic) RTTTelephonyUtilities *utilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)relayIsSupported;
- (_Bool)contactIsTTYContact:(id)arg1;
- (id)initWithUtilityProvider:(id)arg1;
- (id)nts_lazyUtilityProvider;

@end
