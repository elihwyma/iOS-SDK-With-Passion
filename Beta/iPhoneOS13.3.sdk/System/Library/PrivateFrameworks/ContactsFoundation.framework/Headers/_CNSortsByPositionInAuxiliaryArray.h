/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject

{
    NSDictionary *_ranks;
    NSArray *_auxiliaryValues;
    CDUnknownBlockType _transform;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType transform;
@property (copy, nonatomic, readonly) NSDictionary *ranks;
@property (copy, nonatomic, readonly) NSArray *auxiliaryValues;

+ (CDUnknownBlockType)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;

- (CDUnknownBlockType)comparator;
- (id)initWithAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (void)prepareRankingIndex;
- (id)rankForObject:(id)arg1;

@end
