/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class NSArray, NSString;

@interface ICRemoveMediaDRMOperation : ICRequestOperation

{
    NSString *_mediaFilePath;
    NSArray *_sinfs;
    NSString *_newFileExtension;
}

- (void)execute;
- (id)initWithFilePath:(id)arg1 sinfs:(id)arg2;
- (void)removeDRMWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
