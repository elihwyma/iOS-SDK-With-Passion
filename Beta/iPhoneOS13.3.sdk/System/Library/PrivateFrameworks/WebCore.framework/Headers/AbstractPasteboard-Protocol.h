/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/Swift-Protocol.h>

@class NSArray;

@protocol AbstractPasteboard <Swift>

@property (nonatomic, readonly) long long numberOfItems;
@property (copy, nonatomic) NSArray *itemProviders;
@property (nonatomic, readonly) long long numberOfFiles;
@property (nonatomic, readonly) NSArray *allDroppedFileURLs;

- (unsigned short)changeCount;
- (unsigned short)pasteboardTypes;
- (unsigned short)dataForPasteboardType: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesForPasteboardType:inItemSet: /* Error: Ran out of types for this method. */;
- (unsigned short)dataForPasteboardType:inItemSet: /* Error: Ran out of types for this method. */;

@end
