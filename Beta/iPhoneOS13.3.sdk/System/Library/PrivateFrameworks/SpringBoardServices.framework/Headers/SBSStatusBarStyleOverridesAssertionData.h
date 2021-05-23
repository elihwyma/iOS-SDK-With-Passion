/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject

{
    int _statusBarStyleOverrides;
    int _pid;
    _Bool _exclusive;
    _Bool _showsWhenForeground;
    NSString *_statusString;
    NSString *_uniqueIdentifier;
}

@property (nonatomic) int statusBarStyleOverrides;
@property (nonatomic) int pid;
@property (nonatomic, getter=isExclusive) _Bool exclusive;
@property (nonatomic) _Bool showsWhenForeground;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4 uniqueIdentifier:(id)arg5;

@end
