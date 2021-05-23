/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@interface TIKeyboardActivityContext : NSObject

{
    unsigned long long _fromState;
    unsigned long long _toState;
    unsigned long long _excessMemoryInBytes;
}

@property (nonatomic) unsigned long long fromState;
@property (nonatomic) unsigned long long toState;
@property (nonatomic) unsigned long long excessMemoryInBytes;

+ (id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;

@end
