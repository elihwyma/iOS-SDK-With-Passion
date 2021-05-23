/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class VMUFieldInfo;

__attribute__((visibility("hidden")))
@interface VMUFieldValue : NSObject

{
    VMUFieldInfo *_field;
    unsigned long long _value;
}

@property (nonatomic, readonly) VMUFieldInfo *field;
@property (nonatomic, readonly) unsigned long long value;

- (id)initWithField:(id)arg1 value:(unsigned long long)arg2;

@end
