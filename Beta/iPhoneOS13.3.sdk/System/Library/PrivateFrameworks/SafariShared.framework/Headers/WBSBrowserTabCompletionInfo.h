/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSUUID;

@interface WBSBrowserTabCompletionInfo : NSObject

{
    NSUUID *_uuid;
    NSUUID *_windowUUID;
    unsigned long long _tabIndex;
    NSURL *_url;
    NSString *_title;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSUUID *windowUUID;
@property (nonatomic, readonly) unsigned long long tabIndex;
@property (nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSString *title;

- (id)initWithUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 url:(id)arg4 title:(id)arg5;

@end
