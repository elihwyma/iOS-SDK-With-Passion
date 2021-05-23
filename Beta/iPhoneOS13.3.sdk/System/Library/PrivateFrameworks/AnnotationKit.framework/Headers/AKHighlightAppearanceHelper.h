/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKHighlightAppearanceHelper : NSObject

+ (long long)attributeTagForHighlightOfColor:(id)arg1;
+ (id)colorForNoteOfHighlightAttributeTag:(long long)arg1;
+ (id)borderColorForNoteOfHighlightAttributeTag:(long long)arg1;
+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (_Bool)highlightColor:(id)arg1 isEquivalentToHighlightColor:(id)arg2;
+ (int)annotationStyleForHighlightAttributeWithTag:(long long)arg1;
+ (long long)attributeTagForNoteOfColor:(id)arg1;

@end
