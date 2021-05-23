/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFStringIndentation

{
    unsigned long long _width;
    unsigned long long _level;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long level;

+ (id)indentation;
+ (id)indentationWithWidth:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)initWithWidth:(unsigned long long)arg1;
- (id)indentationByLevels:(long long)arg1;

@end
