/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REHTMLElement.h>

@class NSArray;

@interface REHTMLParentElement : REHTMLElement

{
    REHTMLElement *_parent;
    NSArray *_children;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributes;
- (id)classes;
- (id)addChildren:(id)arg1;
- (id)_encodedData;
- (id)elementBySettingClasses:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)initWithParents:(id)arg1 children:(id)arg2;

@end
