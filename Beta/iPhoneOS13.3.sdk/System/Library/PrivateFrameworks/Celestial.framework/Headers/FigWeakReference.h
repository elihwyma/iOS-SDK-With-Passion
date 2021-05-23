/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigWeakReference : NSObject

{
    id _referencedObject;
}

@property (readonly) id referencedObject;

+ (id)weakReferenceToObject:(id)arg1;

- (void)dealloc;
- (id)initWithReferencedObject:(id)arg1;
- (id)retainReferencedObject;

@end
