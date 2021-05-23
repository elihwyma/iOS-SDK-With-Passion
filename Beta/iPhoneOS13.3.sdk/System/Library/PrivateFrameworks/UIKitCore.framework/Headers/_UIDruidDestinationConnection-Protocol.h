/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol _UIDruidDestinationConnection <Swift>

@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (copy, nonatomic) CDUnknownBlockType connectionBlock;
@property (copy, nonatomic) CDUnknownBlockType dragPreviewProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType itemsAddedBlock;
@property (copy, nonatomic) CDUnknownBlockType dropPerformBlock;
@property (copy, nonatomic) CDUnknownBlockType handOffDroppedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType dragEndBlock;

- (unsigned short)init;
- (unsigned short)takePotentialDrop: /* Error: Ran out of types for this method. */;
- (unsigned short)requestVisibleItems: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDropWithOperation: /* Error: Ran out of types for this method. */;
- (unsigned short)sawDragEndEvent;
- (unsigned short)enableKeyboardIfNeeded;
- (unsigned short)dirtyItems: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithSessionIdentifier:systemPolicy: /* Error: Ran out of types for this method. */;

@end
