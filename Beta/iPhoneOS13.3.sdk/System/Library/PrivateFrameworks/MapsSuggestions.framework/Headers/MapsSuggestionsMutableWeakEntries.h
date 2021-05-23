/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject

{
    NSPointerArray *_array;
    _Bool _dirty;
}

@property (nonatomic, readonly) NSArray *strongArray;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)initWithEntries:(struct NSArray *)arg1;
- (void)addWeakObject:(id)arg1;
- (id)weakObjectAtIndex:(unsigned long long)arg1;

@end
