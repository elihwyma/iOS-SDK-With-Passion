/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSData, NSDate, NSString;

@interface WFRealmCloudKitSyncToken : RLMObject

{
    NSString *_identifier;
    NSString *_account;
    NSDate *_date;
    NSData *_serverChangeTokenData;
    NSData *_lastOrderingData;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *serverChangeTokenData;
@property (copy, nonatomic) NSData *lastOrderingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)className;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)syncTokenInRealm:(id)arg1;
+ (void)setSyncToken:(id)arg1 inRealm:(id)arg2;

- (id)descriptor;

@end
