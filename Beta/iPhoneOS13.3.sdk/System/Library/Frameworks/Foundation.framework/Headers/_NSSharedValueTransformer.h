/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSValueTransformer.h>

@interface _NSSharedValueTransformer : NSValueTransformer

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)_isBooleanTransformer;

@end
