/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class NSArray;

@protocol NUPage;

@protocol NUPaging <Swift>

@property (nonatomic, readonly) id <NUPage> firstPage;
@property (nonatomic, readonly) id <NUPage> lastPage;
@property (nonatomic, readonly) NSArray *allPages;

- (unsigned short)pageForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)pageBeforeForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)pageAfterIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)forEachPage: /* Error: Ran out of types for this method. */;

@end
