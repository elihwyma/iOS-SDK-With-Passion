/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <CarKit/CARPrototypePref.h>

@interface CARPrototypeBoolPref : CARPrototypePref

@property (nonatomic, readonly) _Bool invertValueForState;
@property (nonatomic, readonly) _Bool valueBool;
@property (nonatomic, readonly) _Bool cachedValueBool;

+ (id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 invertValueForState:(_Bool)arg4 valueChangedBlock:(CDUnknownBlockType)arg5;

- (id)description;
- (_Bool)state;
- (void)setState:(_Bool)arg1;
- (_Bool)cachedState;
- (void)setCachedState:(_Bool)arg1;

@end
