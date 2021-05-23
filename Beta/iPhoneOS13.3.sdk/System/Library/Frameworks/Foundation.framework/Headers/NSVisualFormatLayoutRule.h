/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLayoutRect, NSString;

@interface NSVisualFormatLayoutRule : NSObject

{
    NSString *_visualFormatString;
    unsigned long long _formatOptions;
    NSDictionary *_metricMapping;
    NSDictionary *_rectMapping;
    NSLayoutRect *_containerRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *ruleDescription;

+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;
+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeChildRules;
- (id)initWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;

@end
