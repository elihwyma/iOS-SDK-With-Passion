/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSNumber, NSString;

@interface SSSilentEnrollmentContext : NSObject

{
    NSNumber *_accountIdentifier;
    NSString *_headerADSID;
    NSString *_headerGSToken;
    NSString *_headerGuid;
    NSString *_headerMMeClientInfo;
    NSString *_headerMMeDeviceId;
    NSData *_parameters;
    NSString *_URLString;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *headerADSID;
@property (copy, nonatomic) NSString *headerGSToken;
@property (copy, nonatomic) NSString *headerGuid;
@property (copy, nonatomic) NSString *headerMMeClientInfo;
@property (copy, nonatomic) NSString *headerMMeDeviceId;
@property (copy, nonatomic) NSData *parameters;
@property (copy, nonatomic) NSString *URLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
