/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSString;

@interface MLBackgroundTask : NSObject <Swift>

{
    NSString *_taskIdentifier;
}

@property (copy, nonatomic) NSString *taskIdentifier;

+ (_Bool)supportsSecureCoding;
+ (_Bool)scheduleTask:(id)arg1;
+ (_Bool)cancelTaskWithIdentifier:(id)arg1;
+ (_Bool)cancelAllTasks;
+ (_Bool)taskIsScheduledWithIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)activityForScheduling;

@end
