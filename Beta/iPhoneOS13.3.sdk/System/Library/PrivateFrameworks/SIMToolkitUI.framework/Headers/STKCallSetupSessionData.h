/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

@interface STKCallSetupSessionData : STKTextSessionData

{
    NSString *_phoneNumber;
    _Bool _isHighPriority;
}

@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) _Bool isHighPriority;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 phoneNumber:(id)arg2;

@end
