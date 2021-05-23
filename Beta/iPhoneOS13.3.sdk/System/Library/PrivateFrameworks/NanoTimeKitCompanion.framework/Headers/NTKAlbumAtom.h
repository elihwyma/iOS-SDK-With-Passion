/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NPTOPhoto, NSDate, NSString, UIImage;

@interface NTKAlbumAtom : NSObject

{
    NPTOPhoto *_photo;
    UIImage *_image;
    NSString *_identifier;
    unsigned long long _index;
    NSDate *_date;
}

@property (nonatomic, readonly) NPTOPhoto *photo;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDate *date;

- (id)initWithPhoto:(id)arg1;

@end
