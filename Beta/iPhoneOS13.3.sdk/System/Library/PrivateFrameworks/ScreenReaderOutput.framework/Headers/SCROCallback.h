/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@protocol NSSecureCoding;

@interface SCROCallback : NSObject

{
    int _key;
    id <NSSecureCoding> _object;
    _Bool _isAtomic;
}

+ (_Bool)supportsSecureCoding;

- (int)key;
- (id)object;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;
- (_Bool)isAtomic;
- (void)postToHandler:(id)arg1;
- (void)setIsAtomic:(_Bool)arg1;

@end
