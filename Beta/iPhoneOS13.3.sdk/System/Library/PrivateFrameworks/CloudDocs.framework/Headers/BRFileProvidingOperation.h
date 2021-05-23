/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRFileProvidingOperation : BROperation

{
    NSURL *_url;
    unsigned long long _readingOptions;
    CDUnknownBlockType _fileProvidingCompletion;
    _Bool _wantsCurrentVersion;
}

@property (nonatomic) _Bool wantsCurrentVersion;
@property (copy, nonatomic) CDUnknownBlockType fileProvidingCompletion;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2;

@end
