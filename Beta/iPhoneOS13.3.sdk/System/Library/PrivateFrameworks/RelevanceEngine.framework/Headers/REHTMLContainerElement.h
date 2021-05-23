/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REHTMLElement.h>

@class NSArray;

@interface REHTMLContainerElement : REHTMLElement

{
    NSArray *_elements;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributes;
- (id)classes;
- (id)_encodedData;
- (id)append:(id)arg1;
- (id)elementBySettingClasses:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)initWithElements:(id)arg1;

@end
