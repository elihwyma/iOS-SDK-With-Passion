/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UILibArchiveAppleDoublePathSet : NSObject

{
    NSMutableSet *_confirmAppleDoublePaths;
    NSMutableSet *_pathsWithDotUnderscorePrefixedFilenames;
}

+ (_Bool)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1;

- (id)init;
- (_Bool)isConfirmedExactAppleDoubleItem:(id)arg1;
- (void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1;
- (void)confirmExactAppleDoubleFilesForItem:(id)arg1;
- (id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1;

@end
