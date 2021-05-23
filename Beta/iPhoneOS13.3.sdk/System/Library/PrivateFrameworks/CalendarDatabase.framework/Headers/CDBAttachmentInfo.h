/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface CDBAttachmentInfo : NSObject

{
    NSURL *_legacyURL;
    NSURL *_url;
    NSString *_localRelativePath;
}

@property (copy, nonatomic, readonly) NSURL *legacyURL;
@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSString *localRelativePath;

- (id)initWithLegacyURL:(id)arg1 url:(id)arg2 localRelativePath:(id)arg3;

@end
