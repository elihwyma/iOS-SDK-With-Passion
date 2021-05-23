/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSDate, NSURL;

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerRestorableState : NSObject <Swift>

{
    _Bool _scrolledToNewest;
    NSDate *_date;
    NSArray *_centerAssetUUIDs;
    NSArray *_centerAssetFrames;
    NSURL *_centerSectionEntryURIRepresentation;
    struct CGSize _collectionViewSize;
    struct CGRect _centerSectionFrame;
}

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) _Bool scrolledToNewest;
@property (copy, nonatomic) NSArray *centerAssetUUIDs;
@property (copy, nonatomic) NSArray *centerAssetFrames;
@property (copy, nonatomic) NSURL *centerSectionEntryURIRepresentation;
@property (nonatomic) struct CGRect centerSectionFrame;
@property (nonatomic) struct CGSize collectionViewSize;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
