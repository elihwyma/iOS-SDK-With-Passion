/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, SGReminder;

@interface SGRealtimeReminder : NSObject

{
    SGReminder *_reminder;
}

@property (nonatomic, readonly) SGReminder *reminder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReminder:(id)arg1;
- (_Bool)isEqualToRealtimeReminder:(id)arg1;

@end
