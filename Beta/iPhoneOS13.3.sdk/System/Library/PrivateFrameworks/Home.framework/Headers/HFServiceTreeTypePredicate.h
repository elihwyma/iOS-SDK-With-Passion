/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface HFServiceTreeTypePredicate : NSObject

{
    _Bool _includeChildServices;
    NSSet *_serviceTypes;
    NSSet *_serviceSubtypes;
}

@property (copy, nonatomic, readonly) NSSet *serviceTypes;
@property (copy, nonatomic, readonly) NSSet *serviceSubtypes;
@property (nonatomic, readonly) _Bool includeChildServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)anyServiceTypePredicate;
+ (id)predicateWithServiceType:(id)arg1;
+ (id)predicateWithServiceType:(id)arg1 includeChildServices:(_Bool)arg2;
+ (id)anyServiceTypePredicateIncludingChildServices;

- (_Bool)isEqual:(id)arg1;
- (id)initWithServiceTypes:(id)arg1 serviceSubtypes:(id)arg2 includeChildServices:(_Bool)arg3;
- (_Bool)_matchesService:(id)arg1;
- (id)matchingServicesForRootService:(id)arg1;

@end
