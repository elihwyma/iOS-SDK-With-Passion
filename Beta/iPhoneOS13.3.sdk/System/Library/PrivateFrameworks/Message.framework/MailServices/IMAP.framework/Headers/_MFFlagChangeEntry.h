/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface _MFFlagChangeEntry : NSObject

{
    NSString *path;
    unsigned int uid;
    NSDictionary *changes;
    unsigned int connectionTag;
    double commitTime;
}

@property (readonly) NSString *path;
@property (readonly) unsigned int uid;
@property (readonly) NSDictionary *changes;
@property double commitTime;
@property unsigned int connectionTag;

- (id)initWithPath:(id)arg1 UID:(unsigned int)arg2 changes:(id)arg3;

@end
