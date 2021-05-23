/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSISVariable.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSISInlineStorageVariable : NSISVariable <Swift>

{
    NSString *_name;
    int _valueRestriction;
    _Bool _shouldBeMinimized;
    _Bool _valueIsUserObservable;
}

@property (copy) NSString *name;
@property int valueRestriction;
@property _Bool shouldBeMinimized;
@property _Bool valueIsUserObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (id)markedConstraint;

@end
