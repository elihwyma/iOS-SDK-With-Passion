/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@interface AVWeakReference : NSObject

@property (weak, readonly) id referencedObject;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;

- (id)initWithReferencedObject:(id)arg1;

@end
