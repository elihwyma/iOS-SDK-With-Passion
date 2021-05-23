/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSSet;

@interface SignpostSupportPIDFilter : NSObject

{
    _Bool __wantsNotEqual;
    NSSet *_pidSet;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) _Bool _wantsNotEqual;
@property (nonatomic, readonly) NSSet *pidSet;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;

- (id)init;
- (_Bool)passesPIDNumber:(id)arg1;
- (_Bool)_wantsNotSubsystem;
- (void)addPIDNumber:(id)arg1;
- (void)addPIDNumberSet:(id)arg1;

@end
