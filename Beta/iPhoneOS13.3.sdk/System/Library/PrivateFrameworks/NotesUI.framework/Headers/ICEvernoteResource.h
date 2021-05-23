/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface ICEvernoteResource : NSObject

{
    _Bool _isAttachment;
    NSString *_mime;
    NSString *_fileName;
    NSData *_data;
    NSString *_md5Hash;
    double _imageWidth;
    double _imageHeight;
    double _duration;
}

@property (nonatomic) _Bool isAttachment;
@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *md5Hash;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double duration;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
