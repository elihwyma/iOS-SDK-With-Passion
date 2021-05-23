/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface SPFinderStateInfo : NSObject

{
    _Bool _state;
    NSDate *_lastUpdated;
    NSDate *_lastPublishDate;
    NSDate *_lastScheduledPublishActivityDate;
    long long _activeCache;
}

@property (nonatomic) _Bool state;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSDate *lastPublishDate;
@property (copy, nonatomic) NSDate *lastScheduledPublishActivityDate;
@property (nonatomic) long long activeCache;

+ (_Bool)supportsSecureCoding;
+ (_Bool)canPublishAnonymously;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(_Bool)arg1 lastUpdated:(id)arg2 lastPublishDate:(id)arg3 lastScheduledPublishActivityDate:(id)arg4 activeCache:(long long)arg5;

@end
