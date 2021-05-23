/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REMDatabaseMigrationAccountInfo : NSObject

{
    NSString *_identifier;
    NSString *_name;
    long long _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

- (id)initWithAccountType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;

@end
