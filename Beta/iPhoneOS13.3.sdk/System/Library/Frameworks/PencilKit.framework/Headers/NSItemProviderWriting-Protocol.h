/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@class NSArray;

@protocol NSItemProviderWriting <Swift>

@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (unsigned short)writableTypeIdentifiersForItemProvider;

- (unsigned short)loadDataWithTypeIdentifier:forItemProviderCompletionHandler: /* Error: Ran out of types for this method. */;

+ (unsigned short)itemProviderVisibilityForRepresentationWithTypeIdentifier: /* Error: Ran out of types for this method. */;

- (unsigned short)writableTypeIdentifiersForItemProvider;
- (unsigned short)itemProviderVisibilityForRepresentationWithTypeIdentifier: /* Error: Ran out of types for this method. */;

@end
