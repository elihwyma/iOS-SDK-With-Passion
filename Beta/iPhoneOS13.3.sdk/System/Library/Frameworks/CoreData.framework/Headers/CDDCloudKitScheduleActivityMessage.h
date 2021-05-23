/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/CDDCloudKitMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage

{
    unsigned long long _activityType;
    NSString *_storePath;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) NSString *storePath;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActivityType:(unsigned long long)arg1 forStoreWithPath:(id)arg2;

@end
