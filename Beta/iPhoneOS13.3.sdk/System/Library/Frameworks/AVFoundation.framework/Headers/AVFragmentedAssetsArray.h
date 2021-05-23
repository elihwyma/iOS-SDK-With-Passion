/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSArray.h>

@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray

{
    unsigned long long _count;
    unsigned long long _firstSequenceNumber;
    NSMutableDictionary *_cachedFragments;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithCount:(unsigned long long)arg1 firstSequenceNumber:(unsigned long long)arg2;

@end
