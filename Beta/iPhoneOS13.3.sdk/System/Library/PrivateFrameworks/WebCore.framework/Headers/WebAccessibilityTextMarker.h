/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityTextMarker : NSObject

{
    struct AXObjectCache *_cache;
    struct TextMarkerData _textMarkerData;
}

+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition *)arg1 cache:(struct AXObjectCache *)arg2;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset *)arg1 cache:(struct AXObjectCache *)arg2;
+ (id)startOrEndTextMarkerForRange:(RefPtr_033e7b31)arg1 isStart:(_Bool)arg2 cache:(struct AXObjectCache *)arg3;

- (id)description;
- (id)dataRepresentation;
- (id).cxx_construct;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache *)arg2;
- (struct AccessibilityObject *)accessibilityObject;
- (id)initWithTextMarker:(struct TextMarkerData *)arg1 cache:(struct AXObjectCache *)arg2;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper *)arg2;
- (struct VisiblePosition)visiblePosition;
- (struct CharacterOffset)characterOffset;
- (_Bool)isIgnored;

@end
