/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSISEngine, NSMapTable;

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject <Swift>

{
    id <NSISVariableDelegate> _delegate;
    NSMapTable *_overflowEngines;
    NSISEngine *_engines[3];
    CDStruct_fcd6c539 _engineVarIndexes[3];
    unsigned int _ident;
}

@property id <NSISVariableDelegate> delegate;
@property (readonly) _Bool shouldBeMinimized;
@property (readonly) int valueRestriction;
@property (readonly) int orientationHint;
@property (readonly) NSArray *engines;

+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3 valueIsUserObservable:(_Bool)arg4;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)markedConstraint;
- (_Bool)valueIsUserVisible;
- (CDStruct_fcd6c539)overflowEngineVarIndexForEngine:(id)arg1;
- (id)descriptionInEngine:(id)arg1;
- (void)_enumerateEngines:(CDUnknownBlockType)arg1;
- (id)_delegateDescription;
- (_Bool)shouldBeIntegral;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (_Bool)markedConstraintIsEligibleForIntegralizationAdjustment;

@end
