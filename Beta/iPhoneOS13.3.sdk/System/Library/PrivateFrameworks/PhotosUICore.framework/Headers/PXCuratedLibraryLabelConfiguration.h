/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXCuratedLibraryLabelConfiguration : NSObject <Swift>

{
    NSString *_text;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
