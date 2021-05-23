/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSString, NSURL, WFImage;

@interface WFGiphyImage : MTLModel

{
    NSURL *_url;
    NSURL *_videoURL;
    unsigned long long _fileSize;
    unsigned long long _width;
    unsigned long long _height;
    WFImage *_cachedImage;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (retain, nonatomic) WFImage *cachedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg1;

@end
