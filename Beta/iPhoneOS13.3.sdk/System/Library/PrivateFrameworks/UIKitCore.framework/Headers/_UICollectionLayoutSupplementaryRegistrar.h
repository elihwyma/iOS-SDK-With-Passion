/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSupplementaryRegistrar : NSObject

{
    NSMutableOrderedSet *_enrollmentIdentifiers;
    NSMutableSet *_uncommittedEnrollmentIdentifiers;
    NSMutableDictionary *_enrollmentsDict;
    NSMutableDictionary *_kindEnrollmentsDict;
}

@property (retain, nonatomic) NSMutableOrderedSet *enrollmentIdentifiers;
@property (retain, nonatomic) NSMutableSet *uncommittedEnrollmentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *enrollmentsDict;
@property (retain, nonatomic) NSMutableDictionary *kindEnrollmentsDict;
@property (nonatomic, readonly) NSSet *kinds;
@property (nonatomic, readonly) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)kindIndexForEnrollmentIdentifier:(id)arg1;
- (void)commitEnrollment:(id)arg1;
- (void)pruneUncommitedEnrollments;
- (long long)countForKind:(id)arg1;
- (void)_addEnrollmentToKindDict:(id)arg1;
- (void)_removeEnrollmentWithIdentifier:(id)arg1;
- (id)enrollSupplementaryForKind:(id)arg1;
- (void)unenrollAllAfterAndIncludingEnrollment:(id)arg1;
- (void)unenrollAllAfterEnrollment:(id)arg1;

@end
