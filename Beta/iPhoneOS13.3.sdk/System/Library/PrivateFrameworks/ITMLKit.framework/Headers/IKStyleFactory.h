/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject

{
    IKStylesGroup *_stylesGroup;
    NSMutableDictionary *_styleListsByClassSelector;
}

@property (retain, nonatomic, readonly) IKStylesGroup *stylesGroup;
@property (retain, nonatomic, readonly) NSMutableDictionary *styleListsByClassSelector;

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(_Bool)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setViewElementStylesDirty;
- (id)initWithStylesGroup:(id)arg1;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (id)styleListForClassSelector:(id)arg1;

@end
