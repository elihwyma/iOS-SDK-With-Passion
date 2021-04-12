//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDebugLogReport : NSObject
{
    NSUInteger _currentIndentLevel;
    id /* CDUnknownBlockType */ _fallbackMessagePrefixHandler;
    NSMutableArray *_statements;
    NSMutableArray *_prefixStack;
}

@property(retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack; // @synthesize prefixStack=_prefixStack;
@property(retain, nonatomic, getter=_statements) NSMutableArray *statements; // @synthesize statements=_statements;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fallbackMessagePrefixHandler; // @synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler;
@property(nonatomic) NSUInteger currentIndentLevel; // @synthesize currentIndentLevel=_currentIndentLevel;
// - (void).cxx_destruct;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;
- (id)_messagePrefixAtIndentLevel:(NSUInteger)arg1;
- (void)clearAllMessagePrefixes;
- (void)popMessagePrefix;
- (void)pushMessagePrefixHandler:(id /* CDUnknownBlockType */)arg1;
- (void)pushMessagePrefix:(id)arg1;
- (void)resetIndentLevel;
- (void)decrementIndentLevel;
- (void)incrementIndentLevel;
- (void)addLineBreak;
- (void)addMessage:(id)arg1;
- (void)addMessageWithFormat:(id)arg1;
@property(readonly, nonatomic) NSUInteger messageCount;
- (id)init;

@end

