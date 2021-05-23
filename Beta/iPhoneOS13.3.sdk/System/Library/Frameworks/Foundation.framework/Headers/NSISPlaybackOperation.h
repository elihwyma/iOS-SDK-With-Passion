/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperation : NSObject

{
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableArray *variableDelegates;
}

- (id)init;
- (void)dealloc;
- (void)_addToEngine:(id)arg1;
- (id)unwrapVariable:(id)arg1;
- (id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;

@end
