/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString;

@interface AASetupAssistantCreateResponse : AAResponse

{
    NSString *_HSAAction;
    NSString *_HSAData;
}

@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSString *HSAAction;
@property (nonatomic, readonly) NSString *HSAData;

@end
