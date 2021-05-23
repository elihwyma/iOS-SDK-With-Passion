/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WBSCredentialMatchResult : NSObject

{
    NSArray *_exactMatches;
    NSArray *_potentialMatches;
    NSArray *_associatedDomainMatches;
}

@property (copy, nonatomic, readonly) NSArray *exactMatches;
@property (copy, nonatomic, readonly) NSArray *potentialMatches;
@property (copy, nonatomic, readonly) NSArray *associatedDomainMatches;

- (id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3;

@end
