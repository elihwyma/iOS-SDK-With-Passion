/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSNumber, NSURL;

__attribute__((visibility("hidden")))
@interface SKDownloadChangeset : NSObject

{
    NSNumber *_contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    NSNumber *_downloadState;
    NSError *_error;
    NSNumber *_progress;
    NSNumber *_timeRemaining;
}

@property (copy, nonatomic) NSNumber *contentLength;
@property (copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSNumber *downloadID;
@property (copy, nonatomic) NSNumber *downloadState;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSNumber *progress;
@property (copy, nonatomic) NSNumber *timeRemaining;

+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
