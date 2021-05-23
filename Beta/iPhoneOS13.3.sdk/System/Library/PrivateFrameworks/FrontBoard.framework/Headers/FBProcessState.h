/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSString;

@interface FBProcessState : NSObject <Swift>

{
    _Bool _running;
    _Bool _foreground;
    _Bool _debugging;
    int _pid;
    long long _taskState;
    long long _visibility;
}

@property (nonatomic) int pid;
@property (nonatomic) long long taskState;
@property (nonatomic) long long visibility;
@property (nonatomic, getter=isDebugging) _Bool debugging;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly, getter=isForeground) _Bool foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPid:(int)arg1;

@end
