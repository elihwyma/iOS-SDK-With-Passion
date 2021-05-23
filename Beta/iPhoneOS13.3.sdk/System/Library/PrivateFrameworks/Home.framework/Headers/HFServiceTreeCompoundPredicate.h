/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol HFServiceTreeMatching;

@interface HFServiceTreeCompoundPredicate : NSObject

{
    id <HFServiceTreeMatching> _rootServicePredicate;
    NSArray *_childServicePredicates;
}

@property (nonatomic, readonly) id <HFServiceTreeMatching> rootServicePredicate;
@property (copy, nonatomic, readonly) NSArray *childServicePredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2;
- (id)matchingServicesForRootService:(id)arg1;

@end
