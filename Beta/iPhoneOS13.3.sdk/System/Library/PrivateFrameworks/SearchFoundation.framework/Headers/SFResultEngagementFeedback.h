/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFResultFeedback.h>

@interface SFResultEngagementFeedback : SFResultFeedback

{
    _Bool _actionEngaged;
    _Bool _matchesUnengagedSuggestion;
    unsigned long long _triggerEvent;
    unsigned long long _destination;
    unsigned long long _actionTarget;
}

@property (nonatomic, readonly) _Bool actionEngaged;
@property (nonatomic) _Bool matchesUnengagedSuggestion;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long actionTarget;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4;
- (id)initWithResult:(id)arg1 actionEngaged:(_Bool)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4;

@end
