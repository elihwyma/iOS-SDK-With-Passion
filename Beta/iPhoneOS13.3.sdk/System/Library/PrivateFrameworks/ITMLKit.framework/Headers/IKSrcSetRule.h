/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKStyleMediaQuery, NSString, NSURL;

@interface IKSrcSetRule : NSObject

{
    NSURL *_imageURL;
    NSString *_descriptor;
    IKStyleMediaQuery *_mediaQuery;
}

@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSString *descriptor;
@property (retain, nonatomic) IKStyleMediaQuery *mediaQuery;

- (id)initWithURL:(id)arg1 descriptor:(id)arg2;
- (void)_parseDescriptor:(id)arg1;
- (void)_parseMediaQueryDescriptor:(id)arg1;
- (void)_parseResolutionDescriptor:(id)arg1;

@end
