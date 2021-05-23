/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, UIImage;

@interface BCImage : NSObject

{
    NSData *_imageData;
    NSString *_identifier;
    NSString *_imageDescription;
}

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *imageDescription;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) UIImage *image;

- (id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3;

@end
