/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface AACloudKitMigrationStateResponse : AAResponse

{
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
