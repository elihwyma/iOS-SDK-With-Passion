/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject

{
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)arg1;

- (id)subpredicates;
- (id)initWithFetchOptions:(id)arg1;
- (id)_verifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)_notVerifiedPredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)arg1;
- (id)_notHiddenTypePredicate;
- (id)personContextNonePredicates;
- (id)personContextPeopleHomePredicate;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (id)personContextOneUpPredicate;

@end
