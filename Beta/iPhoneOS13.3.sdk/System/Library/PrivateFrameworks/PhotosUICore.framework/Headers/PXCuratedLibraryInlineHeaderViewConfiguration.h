/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXCuratedLibraryInlineHeaderViewConfiguration : NSObject <Swift>

{
    _Bool _swapTitleAndSubtitle;
    unsigned long long _style;
    NSString *_title;
    NSString *_subtitle;
}

@property (nonatomic, readonly) unsigned long long style;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) _Bool swapTitleAndSubtitle;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 swapTitleAndSubtitle:(_Bool)arg3 style:(unsigned long long)arg4;

@end
