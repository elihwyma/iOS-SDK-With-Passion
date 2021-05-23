/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@interface DBMigrationResult : NSObject

{
    long long _errorCode;
    long long _dbVersion;
}

@property (nonatomic) long long errorCode;
@property (nonatomic) long long dbVersion;

- (id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2;

@end
