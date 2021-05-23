/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MFDataMessageStore.h>

@class NSString;

@interface _MFSecDataMessageStore : MFDataMessageStore

@property (copy, nonatomic) NSString *storagePath;

+ (Class)classForMimePart;

@end
