/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class NSArray;

@protocol UIDragDropSession <Swift>

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) _Bool allowsMoveOperation;
@property (nonatomic, readonly, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;

- (unsigned short)locationInView: /* Error: Ran out of types for this method. */;
- (unsigned short)hasItemsConformingToTypeIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)canLoadObjectsOfClass: /* Error: Ran out of types for this method. */;

@end
