/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVWeakReference.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVRetainReleaseWeakReference : AVWeakReference

{
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithReferencedObject:(id)arg1;
- (id)referencedObject;

@end
