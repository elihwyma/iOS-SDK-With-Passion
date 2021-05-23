/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface CCUIControlCenterPositionProvider : NSObject

{
    NSArray *_packingRules;
    NSDictionary *_rectByIdentifier;
    struct CCUILayoutSize _layoutSize;
}

@property (nonatomic, readonly) struct CCUILayoutSize layoutSize;
@property (nonatomic, readonly) struct CCUILayoutSize maximumLayoutSize;

- (id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(struct CCUILayoutPoint)arg4 maximumSize:(struct CCUILayoutSize)arg5 outputLayoutSize:(out struct CCUILayoutSize *)arg6;
- (id)initWithPackingRules:(id)arg1;
- (void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2;
- (struct CCUILayoutRect)layoutRectForIdentifier:(id)arg1;

@end
