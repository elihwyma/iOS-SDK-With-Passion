/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject

{
    NSString *mName;
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}

@property (copy, nonatomic) NSString *name;

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3;

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (unsigned long long)strokeCount;
- (id)bgFillAtIndex:(unsigned long long)arg1;
- (void)addFill:(id)arg1;
- (void)addStroke:(id)arg1;
- (void)addEffects:(id)arg1;
- (void)addBgFill:(id)arg1;
- (id)strokeAtIndex:(unsigned long long)arg1;
- (id)fillAtIndex:(unsigned long long)arg1;
- (id)effectsAtIndex:(unsigned long long)arg1;
- (void)validateStyleMatrix;
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;
- (unsigned long long)fillCount;
- (id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)effectsCount;
- (id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)bgFillCount;

@end
