/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDebugLogReport : NSObject

{
    unsigned long long _currentIndentLevel;
    CDUnknownBlockType _fallbackMessagePrefixHandler;
    NSMutableArray *_statements;
    NSMutableArray *_prefixStack;
}

@property (retain, nonatomic, getter=_statements) NSMutableArray *statements;
@property (retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic) unsigned long long currentIndentLevel;
@property (copy, nonatomic) CDUnknownBlockType fallbackMessagePrefixHandler;

- (id)init;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;
- (void)addMessageWithFormat:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (void)pushMessagePrefix:(id)arg1;
- (void)popMessagePrefix;
- (void)incrementIndentLevel;
- (void)decrementIndentLevel;
- (void)addLineBreak;
- (void)resetIndentLevel;
- (id)_messagePrefixAtIndentLevel:(unsigned long long)arg1;
- (void)pushMessagePrefixHandler:(CDUnknownBlockType)arg1;
- (void)clearAllMessagePrefixes;

@end
