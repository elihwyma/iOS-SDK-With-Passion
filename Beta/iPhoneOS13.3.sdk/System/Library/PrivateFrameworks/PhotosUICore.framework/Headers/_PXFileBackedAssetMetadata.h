/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate;

@interface _PXFileBackedAssetMetadata : NSObject

{
    NSDate *_date;
    CLLocation *_location;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) CLLocation *location;

@end
