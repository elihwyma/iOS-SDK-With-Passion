/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface REMClockElementList : NSObject

{
    NSArray *_elements;
}

@property (copy, nonatomic) NSArray *elements;

+ (_Bool)list:(id)arg1 isCompatibleToList:(id)arg2;
+ (long long)compareList:(id)arg1 toList:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCRVectorTimestampElements:(id)arg1;
- (id)initWithTTVectorTimestampElements:(id)arg1;
- (void)encodeIntoEntryArchive:(struct ReplicaEntry *)arg1;
- (id)initWithEntryArchive:(const struct ReplicaEntry *)arg1;

@end
