/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NFStateMachineState : NSObject

{
    NSString *_name;
    CDUnknownBlockType _canTryBlock;
    CDUnknownBlockType _willExitBlock;
    CDUnknownBlockType _willEnterBlock;
    CDUnknownBlockType _didExitBlock;
    CDUnknownBlockType _didEnterBlock;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CDUnknownBlockType canTryBlock;
@property (copy, nonatomic) CDUnknownBlockType willExitBlock;
@property (copy, nonatomic) CDUnknownBlockType willEnterBlock;
@property (copy, nonatomic) CDUnknownBlockType didExitBlock;
@property (copy, nonatomic) CDUnknownBlockType didEnterBlock;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithName:(id)arg1;
- (_Bool)canTry:(id)arg1 withOwner:(id)arg2;
- (void)willExit:(id)arg1 withOwner:(id)arg2;
- (void)willEnter:(id)arg1 withOwner:(id)arg2;
- (id)didExit:(id)arg1 withOwner:(id)arg2;
- (id)didEnter:(id)arg1 withOwner:(id)arg2;
- (id)onCanTry:(CDUnknownBlockType)arg1;
- (id)onWillExit:(CDUnknownBlockType)arg1;
- (id)onDidExit:(CDUnknownBlockType)arg1;
- (id)onWillEnter:(CDUnknownBlockType)arg1;
- (id)onDidEnter:(CDUnknownBlockType)arg1;

@end
