/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTCoreDataChangeTrackerChange : NSObject

{
    NSString *_recordIdentifier;
    long long _changeType;
}

@property (nonatomic, readonly) NSString *recordIdentifier;
@property (nonatomic, readonly) long long changeType;

+ (long long)trackerChangeTypeFromPersistentChangeType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRecordIdentifier:(id)arg1 changeType:(long long)arg2;

@end
