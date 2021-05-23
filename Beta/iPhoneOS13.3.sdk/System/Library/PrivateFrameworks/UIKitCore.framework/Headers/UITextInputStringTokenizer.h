/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIResponder;

@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <Swift>

{
    UIResponder<UITextInput> *_textInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)initWithTextInput:(id)arg1;
- (long long)_indexForTextPosition:(id)arg1;
- (_Bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(_Bool)arg3;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;

@end
