/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSNumber;

@interface AACloudKitStartMigrationResponse : AAResponse

{
    NSNumber *_status;
}

@property (nonatomic, readonly) NSNumber *status;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
