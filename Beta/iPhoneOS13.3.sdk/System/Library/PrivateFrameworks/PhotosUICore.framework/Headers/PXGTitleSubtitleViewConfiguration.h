/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec;

@interface PXGTitleSubtitleViewConfiguration : NSObject <Swift>

{
    NSString *_title;
    NSString *_subtitle;
    PXTitleSubtitleLabelSpec *_spec;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *spec;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
