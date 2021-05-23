/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@interface SOConfigurationVersion : NSObject

{
    long long _mode;
    int _token;
    unsigned long long _version;
}

@property (nonatomic, readonly) long long version;

+ (void)reset;

- (void)dealloc;
- (unsigned long long)_state;
- (id)initWithMode:(long long)arg1;
- (void)increaseVersionWithMessage:(id)arg1;
- (void)setAppSSOUnavailable;
- (long long)checkVersion;
- (void)_setStateAndNotify:(unsigned long long)arg1;

@end
