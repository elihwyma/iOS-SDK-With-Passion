/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL;

@interface _WBSFaviconRecord : NSObject

{
    _Bool _isPrivate;
    NSURL *_pageURL;
    NSURL *_originalPageURL;
    NSURL *_iconURL;
    NSData *_iconData;
    struct CGSize _size;
}

@property (nonatomic, readonly) NSURL *pageURL;
@property (nonatomic, readonly) NSURL *originalPageURL;
@property (nonatomic, readonly) NSURL *iconURL;
@property (copy, nonatomic, readonly) NSData *iconData;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool isPrivate;

+ (id)new;

- (id)init;
- (id)initWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 iconData:(id)arg4 size:(struct CGSize)arg5 isPrivate:(_Bool)arg6;

@end
