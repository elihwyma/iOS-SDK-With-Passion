/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject

{
    NSMutableArray *_mutableInputs;
    unsigned long long _composingInputIndex;
}

@property (nonatomic, readonly) NSMutableArray *mutableInputs;
@property (nonatomic) unsigned long long composingInputIndex;
@property (nonatomic, readonly) NSArray *inputs;
@property (retain, nonatomic) MCKeyboardInput *composingInput;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canComposeNew:(id)arg1;
- (void)composeNew:(id)arg1;
- (void)removeAllInputs;
- (void)removeComposingInput;
- (void)removeInputAtIndex:(unsigned long long)arg1;
- (void)replaceInputAtIndex:(unsigned long long)arg1 with:(id)arg2;
- (void)replaceComposingInputWith:(id)arg1;
- (void)insertInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)hasKindOf:(Class)arg1;
- (_Bool)hasDrawInput;
- (id)asInlineText;
- (id)asCommittedText;
- (unsigned long long)asInlineTextCursorIndex;
- (_Bool)hasRemainingComposingInput;
- (id)asSearchString;
- (id)asMecabraGestures:(_Bool *)arg1;
- (void)_addNearbyKeys:(id)arg1 to:(void *)arg2;
- (id)_asInputStringWithCursorIndex:(unsigned long long *)arg1 remainingComposingInputIndex:(unsigned long long *)arg2 typeInputs:(id)arg3 forSearch:(_Bool)arg4 suffix:(id)arg5;

@end
