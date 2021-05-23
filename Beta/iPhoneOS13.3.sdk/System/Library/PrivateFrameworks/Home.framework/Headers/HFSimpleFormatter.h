/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

#import <Home/Swift-Protocol.h>

@interface HFSimpleFormatter : NSFormatter <Swift>

{
    CDUnknownBlockType _formatterBlock;
    CDUnknownBlockType _attributedFormatterBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType formatterBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType attributedFormatterBlock;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)initWithFormatterBlock:(CDUnknownBlockType)arg1;
- (id)initWithAttributedFormatterBlock:(CDUnknownBlockType)arg1;

@end
