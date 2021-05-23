/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, WBSCyclerBookmarkListRepresentation;

@protocol WBSCyclerTestTarget;

@interface WBSCyclerBookmarkOperationContext : NSObject

{
    id <WBSCyclerTestTarget> _testTarget;
    WBSCyclerBookmarkListRepresentation *_topLevelBookmark;
    NSString *_titlePrefix;
}

@property (retain, nonatomic) id <WBSCyclerTestTarget> testTarget;
@property (retain, nonatomic) WBSCyclerBookmarkListRepresentation *topLevelBookmark;
@property (copy, nonatomic) NSString *titlePrefix;

- (_Bool)_isBookmarkPrefixed:(id)arg1;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg1;
- (id)_copyBookmark:(id)arg1 filteringWithIdentifierWhitelist:(id)arg2;
- (_Bool)_isBookmarkValid:(id)arg1;
- (id)randomDescendantOfList:(id)arg1 enforcingTitlePrefixValidity:(_Bool)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)randomValidStrictDescendantOfList:(id)arg1;
- (id)filterOutBookmarksWithoutTitlePrefixInList:(id)arg1;
- (id)randomBookmarkTitle;
- (id)randomValidStrictDescendantOfTopLevelBookmark;

@end
