/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/Swift-Protocol.h>

@class NSData, NSDate, NSError, NSString;

@protocol MMCSAsset <Swift>

@property (retain, nonatomic) NSString *MMCSUTI;
@property (nonatomic) unsigned long long MMCSItemID;
@property (retain, nonatomic) NSData *MMCSHash;
@property (nonatomic) unsigned long long MMCSItemSize;
@property (retain, nonatomic) NSError *MMCSError;
@property (retain, nonatomic) NSString *MMCSAccessHeader;
@property (retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;
@property (retain, nonatomic) NSString *MMCSReceipt;
@property (nonatomic) unsigned int MMCSItemFlags;

- (unsigned short)MMCSOpenNewFileDescriptor;
- (unsigned short)MMCSItemType;

@end
