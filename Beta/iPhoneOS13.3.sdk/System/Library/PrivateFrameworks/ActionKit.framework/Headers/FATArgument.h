/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class FATField;

@interface FATArgument : NSObject

{
    FATField *_field;
    id _value;
}

@property (retain, nonatomic) FATField *field;
@property (retain, nonatomic) id value;

+ (id)argumentWithField:(id)arg1 value:(id)arg2;

@end
