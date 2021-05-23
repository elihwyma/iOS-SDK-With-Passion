/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WDList, WDListDefinition;

__attribute__((visibility("hidden")))
@interface CMOutlineState : NSObject

{
    NSMutableArray *_counters;
    WDListDefinition *_listDefinition;
    WDList *_currentList;
}

@property (readonly) WDListDefinition *listDefinition;
@property (retain) WDList *currentList;

- (id)init;
- (void)reset;
- (unsigned long long)levelCount;
- (unsigned long long)counterAtLevel:(unsigned char)arg1;
- (id)levelDescriptionAtIndex:(unsigned char)arg1;
- (void)increaseCounterAtLevel:(unsigned char)arg1;
- (id)initWithListDefinition:(id)arg1;
- (void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2;

@end
