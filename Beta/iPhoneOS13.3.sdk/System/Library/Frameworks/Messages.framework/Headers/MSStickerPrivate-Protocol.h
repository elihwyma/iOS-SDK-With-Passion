/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Messages/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@protocol MSStickerPrivate <Swift>

@property (nonatomic, readonly) NSURL *imageFileURL;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSData *data;

@end
