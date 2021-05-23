/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class NSArray;

@protocol VUIHomeShareMediaLibraryManagerDelegate;

@protocol VUIHomeShareMediaLibraryManager <Swift>

@property (weak, nonatomic) id <VUIHomeShareMediaLibraryManagerDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *homeShareMediaLibraries;

- (unsigned short)initWithManager: /* Error: Ran out of types for this method. */;
- (unsigned short)beginDiscoveringMediaLibraries;
- (unsigned short)endDiscoveringMediaLibraries;

@end
