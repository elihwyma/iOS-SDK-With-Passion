/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface _SFReaderExtractedData : NSObject

{
    NSString *_title;
    NSString *_author;
    NSString *_publishedDate;
    NSData *_body;
    NSURL *_mainImageURL;
    NSURL *_url;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *author;
@property (copy, nonatomic, readonly) NSString *publishedDate;
@property (nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) NSURL *mainImageURL;
@property (nonatomic, readonly) NSURL *url;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithAuthor:(id)arg1 body:(id)arg2 publishedDate:(id)arg3 title:(id)arg4 mainImageURL:(id)arg5 url:(id)arg6;
- (id)initWithReaderContent:(id)arg1 url:(id)arg2;

@end
