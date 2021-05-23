/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface NonRetainedObjectContainer : NSObject

{
    id _nonRetainedObject;
}

@property (weak, nonatomic) id nonRetainedObject;

- (id)initWithObject:(id)arg1;

@end
