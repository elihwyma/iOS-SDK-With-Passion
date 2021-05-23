/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectDifferenceEngine : NSObject

{
    long long _sourceCount;
    long long _destinationCount;
    long long _prefixCount;
    long long _suffixCount;
    long long _innerSourceCount;
    long long _innerDestinationCount;
    long long *_mergeTable;
    NSArray *_merged;
    NSArray *_source;
    NSArray *_destination;
}

@property (copy, nonatomic) NSArray *source;
@property (copy, nonatomic) NSArray *destination;
@property (copy, nonatomic, readonly) NSArray *merged;

- (void)dealloc;
- (id)description;
- (void)_reset;
- (id)mergeSource:(id)arg1 andDestination:(id)arg2;
- (void)_calculatePrefixAndSuffix;
- (void)_calculateLCSSTable;
- (void)_calculateMerge;
- (void)_calculate;
- (id)describeMergeTable;

@end
