/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject

{
    LPLinkMetadata *_linkMetadata;
    NSURL *_URL;
}

@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) LPLinkMetadata *_linkMetadata;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
