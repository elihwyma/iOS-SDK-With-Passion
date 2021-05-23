/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MIME/MFDataMessageStore.h>

@class NSString;

@interface _MFSecDataMessageStore : MFDataMessageStore

@property (copy, nonatomic) NSString *storagePath;

+ (Class)classForMimePart;

@end
