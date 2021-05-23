/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSKSearch : NSObject

{
    _Bool _isComplete;
    NSString *_string;
    unsigned long long _options;
    CDUnknownBlockType _hitBlock;
}

@property (copy, nonatomic) NSString *string;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) CDUnknownBlockType hitBlock;
@property (nonatomic) _Bool isComplete;

- (void)dealloc;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;

@end
