/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSearchViewAppearFeedback

{
    _Bool _isOnLockScreen;
    _Bool _isOverApp;
    _Bool _readerTextAvailable;
    unsigned long long _viewAppearEvent;
}

@property (nonatomic) unsigned long long viewAppearEvent;
@property (nonatomic) _Bool isOnLockScreen;
@property (nonatomic) _Bool isOverApp;
@property (nonatomic) _Bool readerTextAvailable;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end
