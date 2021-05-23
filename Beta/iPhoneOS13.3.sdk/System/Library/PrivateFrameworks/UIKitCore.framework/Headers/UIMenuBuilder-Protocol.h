/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@class UIMenuSystem;

@protocol UIMenuBuilder

@property (nonatomic, readonly) UIMenuSystem *system;

- (unsigned short)menuForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceMenuForIdentifier:withMenu: /* Error: Ran out of types for this method. */;
- (unsigned short)actionForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)commandForAction:propertyList: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceChildrenOfMenuForIdentifier:fromChildrenBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)insertSiblingMenu:beforeMenuForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)insertSiblingMenu:afterMenuForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)insertChildMenu:atStartOfMenuForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)insertChildMenu:atEndOfMenuForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeMenuForIdentifier: /* Error: Ran out of types for this method. */;

@end
