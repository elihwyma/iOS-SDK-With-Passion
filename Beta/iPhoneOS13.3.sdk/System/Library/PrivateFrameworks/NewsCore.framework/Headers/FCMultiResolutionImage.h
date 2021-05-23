/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSURL;

@interface FCMultiResolutionImage : NSObject <Swift>

{
    NSURL *_imageURL1x;
    NSURL *_imageURL2x;
    NSURL *_imageURL3x;
}

@property (retain, nonatomic) NSURL *imageURL1x;
@property (retain, nonatomic) NSURL *imageURL2x;
@property (retain, nonatomic) NSURL *imageURL3x;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3;

@end
