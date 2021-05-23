/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/TMLReactiveValue.h>

@interface TMLBlockReactiveValue : TMLReactiveValue

{
    CDUnknownBlockType _block;
}

- (id)value;
- (id)initWithBlock:(CDUnknownBlockType)arg1 bindings:(id)arg2 valueType:(unsigned long long)arg3;

@end
