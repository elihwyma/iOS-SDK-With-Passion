/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackRow : NSObject

{
    _Bool _hosted;
    _Bool _bounded;
    long long _sectionIndex;
    struct TVRowMetrics _rowMetrics;
}

@property (nonatomic) struct TVRowMetrics rowMetrics;
@property (nonatomic, getter=isHosted) _Bool hosted;
@property (nonatomic, getter=isBounded) _Bool bounded;
@property (nonatomic) long long sectionIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
