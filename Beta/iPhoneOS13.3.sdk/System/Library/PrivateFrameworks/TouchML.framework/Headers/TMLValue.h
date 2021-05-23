/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLValue : NSObject

{
    id _value;
    unsigned long long _valueType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (unsigned long long)valueType;
- (id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2;

@end
