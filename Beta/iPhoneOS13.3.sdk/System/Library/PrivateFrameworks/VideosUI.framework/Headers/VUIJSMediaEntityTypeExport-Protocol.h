/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class NSString;

@protocol VUIJSMediaEntityTypeExport <Swift>

@property (nonatomic, readonly) NSString *subtype;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *collectionType;

+ (unsigned short)show;
+ (unsigned short)movie;
+ (unsigned short)season;
+ (unsigned short)episode;
+ (unsigned short)rental;
+ (unsigned short)homeVideo;

@end
