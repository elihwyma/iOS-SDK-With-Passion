/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface CKImageData : NSObject

{
    struct CGImageSource *_imageSource;
    unsigned long long _count;
    long long _orientation;
    struct CGSize _pxSize;
    _Bool _initializedProperties;
    NSData *_data;
    NSURL *_url;
    UIImage *_image;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) struct CGSize ptSize;
@property (nonatomic, readonly) struct CGSize pxSize;
@property (copy, nonatomic, readonly) NSString *UTIType;
@property (copy, nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsASTC;
+ (id)UTITypeForData:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)_initializeProperties;
- (id)durationsWithMaxCount:(unsigned long long)arg1;
- (id)thumbnailAtIndex:(unsigned long long)arg1 fillToSize:(struct CGSize)arg2 maxCount:(unsigned long long)arg3;
- (id)thumbnailFillToSize:(struct CGSize)arg1;
- (id)thumbnailsFillToSize:(struct CGSize)arg1 maxCount:(unsigned long long)arg2;
- (id)_thumbnailFitToSize:(struct CGSize)arg1 atIndex:(unsigned long long)arg2;
- (id)_thumbnailFillToSize:(struct CGSize)arg1 atIndex:(unsigned long long)arg2;
- (id)_defaultDurationsWithMaxCount:(unsigned long long)arg1;
- (id)thumbnailFitToSize:(struct CGSize)arg1;
- (id)thumbnailFillToSizeCropping:(struct CGSize)arg1;
- (id)thumbnailsFitToSize:(struct CGSize)arg1 maxCount:(unsigned long long)arg2;

@end
