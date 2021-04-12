//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    int _statusBarStyleOverrides;
    int _pid;
    BOOL _exclusive;
    BOOL _showsWhenForeground;
    NSString *_statusString;
    NSString *_uniqueIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) BOOL showsWhenForeground; // @synthesize showsWhenForeground=_showsWhenForeground;
@property(nonatomic, getter=isExclusive) BOOL exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 uniqueIdentifier:(id)arg5;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4;
- (id)init;

@end

