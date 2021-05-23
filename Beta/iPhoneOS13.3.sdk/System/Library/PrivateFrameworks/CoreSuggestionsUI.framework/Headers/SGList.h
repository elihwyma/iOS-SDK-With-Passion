/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol SGListDelegate;

@interface SGList : NSObject

{
    id <SGListDelegate> _delegate;
    CDUnknownBlockType _comparator;
    NSMutableArray *_array;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id <SGListDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType comparator;

- (id)init;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (_Bool)removeItem:(id)arg1;
- (void)removeAllItems;
- (id)items;
- (_Bool)addItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItem:(id)arg1;

@end
