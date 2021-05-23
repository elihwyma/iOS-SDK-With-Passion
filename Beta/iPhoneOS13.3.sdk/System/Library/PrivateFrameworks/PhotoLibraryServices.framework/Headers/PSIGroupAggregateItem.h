/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSValue, PSIGroup, PSIQueryToken;

@interface PSIGroupAggregateItem : NSObject

{
    PSIQueryToken *_searchToken;
    NSValue *_rangeMatchingToken;
    PSIGroup *_group;
    NSArray *_assetIds;
    NSArray *_collectionIds;
}

@property (retain, nonatomic) PSIQueryToken *searchToken;
@property (retain, nonatomic) NSValue *rangeMatchingToken;
@property (retain, nonatomic) PSIGroup *group;
@property (retain, nonatomic) NSArray *assetIds;
@property (retain, nonatomic) NSArray *collectionIds;

- (void)reset;

@end
