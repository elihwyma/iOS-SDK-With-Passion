/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@interface HFFormatterTransformer : NSFormatter

{
    NSFormatter *_sourceFormatter;
    CDUnknownBlockType _transformBlock;
}

@property (copy, nonatomic) NSFormatter *sourceFormatter;
@property (copy, nonatomic) CDUnknownBlockType transformBlock;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithSourceFormatter:(id)arg1 transformBlock:(CDUnknownBlockType)arg2;

@end
