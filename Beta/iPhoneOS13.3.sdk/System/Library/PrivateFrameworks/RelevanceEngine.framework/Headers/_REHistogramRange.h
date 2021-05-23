/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _REHistogramRange : NSObject

{
    unsigned long long _min;
    unsigned long long _max;
    unsigned long long _mid;
}

@property (nonatomic, readonly) unsigned long long min;
@property (nonatomic, readonly) unsigned long long max;
@property (nonatomic, readonly) unsigned long long mid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (id)initWithValue:(unsigned long long)arg1 binningSize:(unsigned long long)arg2;

@end
