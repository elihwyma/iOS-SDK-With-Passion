/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIAssociationTable : NSObject

{
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (id)description;
- (_Bool)isEmpty;
- (id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2;
- (id)rightValueEnumerableForLeftValue:(id)arg1;
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (_Bool)hasRightValuesForLeftValue:(id)arg1;
- (_Bool)hasLeftValuesForRightValue:(id)arg1;
- (id)leftValuesForRightValue:(id)arg1;
- (id)leftValueEnumerable;
- (id)leftValues;
- (id)rightValues;
- (id)rightValueEnumerable;
- (id)rightValuesForLeftValue:(id)arg1;
- (id)leftValueEnumerableForRightValue:(id)arg1;

@end
