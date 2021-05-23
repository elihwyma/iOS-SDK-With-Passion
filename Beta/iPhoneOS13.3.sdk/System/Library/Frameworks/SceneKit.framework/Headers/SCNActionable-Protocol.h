/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray;

@protocol SCNActionable <Swift>

@property (nonatomic, readonly) _Bool hasActions;
@property (nonatomic, readonly) NSArray *actionKeys;

- (unsigned short)removeAllActions;
- (unsigned short)actionForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeActionForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction:forKey:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction:completionHandler: /* Error: Ran out of types for this method. */;

@end
