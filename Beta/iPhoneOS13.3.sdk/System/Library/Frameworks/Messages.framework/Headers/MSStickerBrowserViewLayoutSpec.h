/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSStickerBrowserViewLayoutSpec : NSObject

{
    long long _stickerSize;
    long long _interfaceOrientation;
    struct CGSize _itemSize;
}

@property (nonatomic, readonly) long long stickerSize;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) struct CGSize itemSize;
@property (nonatomic, readonly) struct UIEdgeInsets sectionInset;
@property (nonatomic, readonly) double minimumInteritemSpacing;
@property (nonatomic, readonly) double minimumLineSpacing;

+ (id)specWithSizeClass:(long long)arg1 interfaceOrientation:(long long)arg2;

- (id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2;

@end
