/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLSourceDeviceAccount : NSObject

{
    unsigned long long _sqlID;
    NSString *_identifier;
}

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)accountInfoArrayContainsNonSyncableAccount:(id)arg1;
+ (_Bool)accountInfoRepresentsSyncableAccount:(id)arg1;
+ (id)accountWithInfo:(id)arg1;

- (id)initWithInfo:(id)arg1;

@end
