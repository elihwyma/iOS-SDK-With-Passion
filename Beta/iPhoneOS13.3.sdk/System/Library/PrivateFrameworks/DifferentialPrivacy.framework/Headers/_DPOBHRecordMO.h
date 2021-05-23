/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSManagedObject.h>

@class NSString;

@interface _DPOBHRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool submitted;
@property (nonatomic) long long reportVersion;

@end
