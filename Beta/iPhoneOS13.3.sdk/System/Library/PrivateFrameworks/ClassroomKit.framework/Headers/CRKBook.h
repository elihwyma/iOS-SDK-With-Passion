/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface CRKBook : NSObject

{
    _Bool _hasChapters;
    NSString *_title;
    NSString *_author;
    NSString *_path;
    NSData *_image;
    NSURL *_webURL;
    long long _type;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSData *image;
@property (copy, nonatomic) NSURL *webURL;
@property (nonatomic) long long type;
@property (nonatomic) _Bool hasChapters;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageDescription;

@end
