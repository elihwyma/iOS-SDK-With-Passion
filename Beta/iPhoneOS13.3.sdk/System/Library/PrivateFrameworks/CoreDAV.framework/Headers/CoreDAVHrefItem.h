/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CoreDAVHrefItem

{
    NSURL *_baseURL;
    int _writeStyle;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (id)init;
- (id)description;
- (id)initWithURL:(id)arg1;
- (void)write:(id)arg1;
- (id)payloadAsFullURL;
- (id)payloadAsOriginalURL;
- (void)parserSuggestsBaseURL:(id)arg1;

@end
