/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol NSItemProviderWriting <Swift>

@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (unsigned short)writableTypeIdentifiersForItemProvider;

- (unsigned short)loadDataWithTypeIdentifier:forItemProviderCompletionHandler: /* Error: Ran out of types for this method. */;

+ (unsigned short)itemProviderVisibilityForRepresentationWithTypeIdentifier: /* Error: Ran out of types for this method. */;

- (unsigned short)writableTypeIdentifiersForItemProvider;
- (unsigned short)itemProviderVisibilityForRepresentationWithTypeIdentifier: /* Error: Ran out of types for this method. */;

@end
