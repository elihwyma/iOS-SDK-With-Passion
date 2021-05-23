/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject

{
    NSURL *_URL;
    UIImage *_thumbnail;
    long long _attachmentURLType;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) long long attachmentURLType;

- (id)scheme;
- (_Bool)isFileURL;

@end
