/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IntArray2D : NSObject

{
    long long *_arrayData;
    unsigned long long _iSize;
    unsigned long long _jSize;
    _Bool _shouldBoundsCheck;
}

@property (nonatomic, readonly) unsigned long long iSize;
@property (nonatomic, readonly) unsigned long long jSize;
@property (nonatomic) _Bool shouldBoundsCheck;

+ (id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;

- (void)dealloc;
- (id)description;
- (void):(unsigned long long)arg1:(unsigned long long)arg2 newValue:(long long)arg3;
- (long long):(unsigned long long)arg1:(unsigned long long)arg2;
- (long long):(unsigned long long)arg1:(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3;
- (id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;
- (_Bool)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;
- (void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;

@end
