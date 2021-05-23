/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/Swift-Protocol.h>

@class UIImage;

@protocol DOCThumbnail <Swift>

@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) _Bool isRepresentativeIcon;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;

- (unsigned short)addListener: /* Error: Ran out of types for this method. */;
- (unsigned short)removeListener: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleUpdateIfNeeded;
- (unsigned short)registerGenerationCompletionHandler: /* Error: Ran out of types for this method. */;

@end
