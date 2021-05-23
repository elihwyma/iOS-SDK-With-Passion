/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUFeedCollectionViewSectionLayoutInfo : NSObject

{
    _Bool _hidden;
    NSArray *_fixedLayoutAttributes;
    NSArray *_tileLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    long long _sectionType;
    long long _previousVisibleSection;
    long long _nextVisibleSection;
    long long _firstJoinedSection;
    long long _lastJoinedSection;
    id _groupID;
    long long _numberOfTilesOmitted;
    struct CGPoint _origin;
    struct CGSize _size;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct UIEdgeInsets _margins;
}

@property (nonatomic) struct CGPoint origin;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGSize headerSize;
@property (nonatomic) struct CGSize footerSize;
@property (nonatomic) struct UIEdgeInsets margins;
@property (retain, nonatomic) NSArray *fixedLayoutAttributes;
@property (retain, nonatomic) NSArray *tileLayoutAttributes;
@property (retain, nonatomic) NSArray *floatingLayoutAttributes;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long previousVisibleSection;
@property (nonatomic) long long nextVisibleSection;
@property (nonatomic) long long firstJoinedSection;
@property (nonatomic) long long lastJoinedSection;
@property (retain, nonatomic) id groupID;
@property (nonatomic) long long numberOfTilesOmitted;
@property (nonatomic, readonly) struct CGRect frame;

- (id)init;

@end
