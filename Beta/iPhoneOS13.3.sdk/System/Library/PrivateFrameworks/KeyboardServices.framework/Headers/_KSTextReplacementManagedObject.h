/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface _KSTextReplacementManagedObject : NSManagedObject

@property (retain, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSData *remoteRecordInfo;
@property (nonatomic) _Bool needsSaveToCloud;
@property (nonatomic) _Bool wasDeleted;
@property (retain, nonatomic) NSString *uniqueName;

@end
