/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSURL, NSUUID;

@interface _CDAttachmentRecord : NSManagedObject

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSUUID *cloudIdentifier;
@property (retain, nonatomic) NSString *photoLocalIdentifier;
@property (nonatomic) long long sizeInBytes;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) NSSet *interactions;

@end
