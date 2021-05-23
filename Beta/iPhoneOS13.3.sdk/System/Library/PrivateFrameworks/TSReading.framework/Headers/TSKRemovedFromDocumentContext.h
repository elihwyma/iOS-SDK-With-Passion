/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKRemovedFromDocumentContext : NSObject

+ (id)movingContext;
+ (id)hidingContext;

- (_Bool)wasMoved;
- (id)undoContext;
- (_Bool)wasHidden;

@end
