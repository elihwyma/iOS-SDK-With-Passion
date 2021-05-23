/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSSet;

@interface SignpostSupportExactProcessNameFilter : NSObject

{
    NSSet *_processNameSet;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) _Bool _wantsNotEqual;
@property (nonatomic, readonly) NSSet *processNameSet;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;

- (id)init;
- (_Bool)passesProcessName:(id)arg1;
- (void)addProcessName:(id)arg1;
- (void)addProcessNameSet:(id)arg1;

@end
