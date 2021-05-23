/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject

{
    NSString *_message;
    NSString *_title;
    NSURL *_url;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;

+ (void)actionForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)performWithCompletion:(CDUnknownBlockType)arg1;

@end
