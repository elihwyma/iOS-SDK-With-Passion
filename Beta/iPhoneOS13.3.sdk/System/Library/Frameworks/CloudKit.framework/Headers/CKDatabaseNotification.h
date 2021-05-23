/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKNotification.h>

@interface CKDatabaseNotification : CKNotification

{
    long long _databaseScope;
}

@property (nonatomic) long long databaseScope;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end
