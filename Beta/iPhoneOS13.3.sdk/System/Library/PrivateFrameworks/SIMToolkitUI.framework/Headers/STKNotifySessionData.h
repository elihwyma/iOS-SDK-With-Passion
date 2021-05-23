/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKTextSessionData.h>

@interface STKNotifySessionData : STKTextSessionData

{
    long long _notifyType;
}

@property (nonatomic, readonly) long long notifyType;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 notifyType:(long long)arg2;

@end
