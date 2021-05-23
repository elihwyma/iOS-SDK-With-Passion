/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@interface HFValueSetFormatter : NSFormatter

{
    long long _unitStyle;
    CDUnknownBlockType _stringProvider;
}

@property (copy, nonatomic) CDUnknownBlockType stringProvider;
@property (nonatomic) long long unitStyle;

+ (id)formatterWithStringProvider:(CDUnknownBlockType)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithStringProvider:(CDUnknownBlockType)arg1;

@end
