/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSItemProvider;

@protocol UITextPasteItem <Swift>

@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) id localObject;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;

- (unsigned short)setNoResult;
- (unsigned short)setStringResult: /* Error: Ran out of types for this method. */;
- (unsigned short)setAttributedStringResult: /* Error: Ran out of types for this method. */;
- (unsigned short)setAttachmentResult: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultResult;

@end
