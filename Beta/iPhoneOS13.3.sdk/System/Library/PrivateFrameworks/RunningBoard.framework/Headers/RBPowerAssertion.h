/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RBPowerAssertion : NSObject

{
    unsigned int _identifier;
    NSDate *_acquisitionDate;
    NSString *_name;
    NSString *_baseName;
    _Bool _invalidated;
}

@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic, readonly) NSDate *acquisitionDate;
@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_nameForPreventIdleSleepIdentifiers:(id)arg1;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (id)_calculateNewName;
- (void)updateWithAcquisitionHandler:(CDUnknownBlockType)arg1 invalidationHander:(CDUnknownBlockType)arg2;

@end
