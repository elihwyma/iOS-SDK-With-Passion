/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSSet;

@interface SignpostSupportUniquePIDFilter : NSObject

{
    NSSet *_uniquePidSet;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) _Bool _wantsNotEqual;
@property (nonatomic, readonly) NSSet *uniquePidSet;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;

- (id)init;
- (_Bool)passesUniquePIDNumber:(id)arg1;
- (void)addUniquePIDNumber:(id)arg1;
- (void)addUniquePIDNumberSet:(id)arg1;

@end
