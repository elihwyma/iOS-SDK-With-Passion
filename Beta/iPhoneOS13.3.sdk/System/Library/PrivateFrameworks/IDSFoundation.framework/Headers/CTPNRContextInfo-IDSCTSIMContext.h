/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <CoreTelephony/CTPNRContextInfo.h>

@class NSString;

@interface CTPNRContextInfo (IDSCTSIMContext)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *phoneNumberOnSIM;

@end
