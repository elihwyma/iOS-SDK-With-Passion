/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDocumentDifferenceSize;

__attribute__((visibility("hidden")))
@interface NSDocumentDifferenceSizeTriple : NSObject

{
    NSDocumentDifferenceSize *_dueToRecentChangesBeforeSaving;
    NSDocumentDifferenceSize *_betweenPreservingPreviousVersionAndSaving;
    NSDocumentDifferenceSize *_betweenPreviousSavingAndSaving;
}

@property (nonatomic, readonly) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving;
@property (nonatomic, readonly) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving;
@property (nonatomic, readonly) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving;

- (id)init;
- (id)description;

@end
