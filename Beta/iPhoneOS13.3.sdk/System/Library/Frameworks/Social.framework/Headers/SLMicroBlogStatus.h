/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSArray, NSString;

@interface SLMicroBlogStatus : NSObject <Swift>

{
    NSString *_statusText;
    NSArray *_imageData;
    NSArray *_imageAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_inReplyToStatusID;
}

@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSArray *imageData;
@property (retain, nonatomic) NSArray *imageAssetURLs;
@property (retain, nonatomic) NSString *maskedApplicationID;
@property (retain, nonatomic) NSString *inReplyToStatusID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
