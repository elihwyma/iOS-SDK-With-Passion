/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject

{
    struct TextTrackRepresentationCocoa *_parent;
}

@property struct TextTrackRepresentationCocoa *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithParent:(struct TextTrackRepresentationCocoa *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end
