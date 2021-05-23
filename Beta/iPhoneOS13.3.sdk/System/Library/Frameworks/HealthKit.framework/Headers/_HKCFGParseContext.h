/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSScanner, _HKCFGNodeCache;

__attribute__((visibility("hidden")))
@interface _HKCFGParseContext : NSObject

{
    NSScanner *_scanner;
    unsigned long long _lengthAllowance;
    unsigned long long _recursiveDepth;
    _HKCFGNodeCache *_cache;
}

@property (nonatomic, readonly) NSScanner *scanner;
@property (nonatomic, readonly) unsigned long long lengthAllowance;
@property (nonatomic, readonly) unsigned long long recursiveDepth;
@property (nonatomic, readonly) _HKCFGNodeCache *cache;

- (id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2;
- (void)incrementRecursiveDepth;
- (void)decrementRecursiveDepth;
- (void)decreaseLengthAllowance:(unsigned long long)arg1;
- (void)increaseLengthAllowance:(unsigned long long)arg1;

@end
