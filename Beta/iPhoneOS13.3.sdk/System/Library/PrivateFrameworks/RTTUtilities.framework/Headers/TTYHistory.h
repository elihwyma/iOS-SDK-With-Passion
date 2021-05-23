/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSNumber, NSString;

@interface TTYHistory : NSManagedObject

@property (retain, nonatomic) NSString *callUID;
@property (retain, nonatomic) NSNumber *needsCloudKitUpload;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *version;

@end
