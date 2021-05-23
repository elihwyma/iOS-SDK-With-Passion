/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSISVariable.h>

__attribute__((visibility("hidden")))
@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (_Bool)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
