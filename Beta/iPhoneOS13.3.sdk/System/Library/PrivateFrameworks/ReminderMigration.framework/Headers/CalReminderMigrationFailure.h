/*
 Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface CalReminderMigrationFailure : NSObject

{
    NSString *_failureDescription;
    unsigned long long _stage;
    NSError *_underlyingError;
    NSString *_relatedPath;
}

@property (copy, nonatomic, readonly) NSString *failureDescription;
@property (nonatomic, readonly) unsigned long long stage;
@property (copy, nonatomic, readonly) NSError *underlyingError;
@property (copy, nonatomic, readonly) NSString *relatedPath;

+ (id)_labelForStage:(unsigned long long)arg1;

- (id)description;
- (id)initWithDescription:(id)arg1 stage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedPath:(id)arg4;

@end
