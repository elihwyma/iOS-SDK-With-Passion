/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface RBAssertionIntransientState : NSObject

{
    _Bool _invalidatesSynchronously;
    _Bool _isPersistent;
    _Bool _hasHereditaryGrant;
    _Bool _hasDomainAttribute;
    _Bool _definesRelativeStartTime;
    _Bool _terminateTargetOnOriginatorExit;
    _Bool _suspendsOnOriginatorSuspension;
    NSMutableSet *_sourceEnvironments;
    unsigned long long _runningReason;
    unsigned long long _legacyReason;
    NSString *_domainAttributes;
    unsigned long long _startPolicy;
    unsigned long long _endPolicy;
    double _invalidationDuration;
    double _warningDuration;
}

@property (nonatomic) _Bool isPersistent;
@property (nonatomic) _Bool hasHereditaryGrant;
@property (nonatomic) _Bool hasDomainAttribute;
@property (nonatomic) _Bool definesRelativeStartTime;
@property (nonatomic) _Bool terminateTargetOnOriginatorExit;
@property (nonatomic) _Bool invalidatesSynchronously;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) unsigned long long endPolicy;
@property (nonatomic) double invalidationDuration;
@property (nonatomic) double warningDuration;
@property (nonatomic, readonly) NSMutableSet *sourceEnvironments;
@property (nonatomic) unsigned long long runningReason;
@property (nonatomic) unsigned long long legacyReason;
@property (retain, nonatomic) NSString *domainAttributes;
@property (nonatomic) _Bool suspendsOnOriginatorSuspension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
