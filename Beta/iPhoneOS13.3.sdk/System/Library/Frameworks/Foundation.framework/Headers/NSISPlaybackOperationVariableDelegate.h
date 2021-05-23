/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSISVariable, NSString;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperationVariableDelegate : NSObject

{
    NSISVariable *_variable;
    NSString *_variableDescription;
    NSString *_markedConstraintDescription;
    _Bool _variableIsUserObservable;
    int _orientationHint;
}

@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property (copy) NSString *markedConstraintDescription;
@property _Bool variableIsUserObservable;
@property int orientationHint;

- (void)dealloc;
- (id)description;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (id)firstItem;
- (id)secondItem;
- (void)_addToEngine:(id)arg1;

@end
