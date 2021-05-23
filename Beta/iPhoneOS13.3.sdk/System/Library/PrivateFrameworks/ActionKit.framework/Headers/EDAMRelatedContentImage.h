/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMRelatedContentImage : FATObject

{
    NSString *_url;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_pixelRatio;
    NSNumber *_fileSize;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *pixelRatio;
@property (retain, nonatomic) NSNumber *fileSize;

+ (id)structName;
+ (id)structFields;

@end
