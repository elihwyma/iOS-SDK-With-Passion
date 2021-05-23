/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAState, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerUndo : NSObject

{
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

@property (readonly) CAStateControllerUndo *next;
@property (retain, nonatomic) CAState *state;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableArray *transitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addElement:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;

@end
