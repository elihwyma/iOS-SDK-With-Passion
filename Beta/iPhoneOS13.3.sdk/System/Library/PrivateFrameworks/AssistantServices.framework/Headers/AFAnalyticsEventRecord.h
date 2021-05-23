/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFAnalyticsEvent, NSDate, NSString;

@interface AFAnalyticsEventRecord : NSObject <Swift>

{
    AFAnalyticsEvent *_event;
    NSString *_streamUID;
    NSDate *_dateCreated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) AFAnalyticsEvent *event;
@property (copy, nonatomic, readonly) NSString *streamUID;
@property (copy, nonatomic, readonly) NSDate *dateCreated;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3;
- (void)siriCoreSQLiteRecord_enumerateStorageKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;

@end
