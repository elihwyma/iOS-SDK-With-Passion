/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TRIContext)

+ (id)dictionaryFromXPCObject:(id)arg1;
+ (id)dictionaryWithKeys:(id)arg1 values:(id)arg2;
+ (void)keys:(id *)arg1 values:(id *)arg2 fromDictionary:(id)arg3;

- (_Bool)addToXPCObject:(id)arg1;
- (id)toXPCObject;
- (id)getContextValueWithName:(id)arg1;
- (void)keys:(id *)arg1 values:(id *)arg2;
- (id)triStringValueForField:(id)arg1;
- (id)triDataValueForField:(id)arg1;
- (id)triArrayValueForField:(id)arg1;
- (id)triNumberValueForField:(id)arg1;
- (id)triItemsInDagWithSource:(id)arg1;
- (id)triReversedDag;
- (id)triItemsInDagWithSink:(id)arg1;
- (id)triTransformValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)triValueForField:(id)arg1;

@end
