/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet;

@interface IKStylesGroup : NSObject

{
    NSArray *_mediaQueryList;
    NSArray *_orderedStylesOrGroups;
    NSDictionary *_indexedSelectors;
    NSIndexSet *_groupIndexes;
}

@property (retain, nonatomic, readonly) NSArray *mediaQueryList;
@property (retain, nonatomic, readonly) NSArray *orderedStylesOrGroups;
@property (retain, nonatomic, readonly) NSDictionary *indexedSelectors;
@property (retain, nonatomic, readonly) NSIndexSet *groupIndexes;

+ (id)stylesGroupWithMarkup:(id)arg1 filterBlockedStyles:(_Bool)arg2;

- (id)initWithMarkup:(id)arg1 parseSubGroups:(_Bool)arg2 mediaQueryList:(id)arg3 filterBlockedStyles:(_Bool)arg4;
- (void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg1;
- (id)initWithCSSRule:(id)arg1 mediaQueryList:(id)arg2 filterBlockedStyles:(_Bool)arg3;

@end
