/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSManagedObject.h>

@class NSString;

@interface _DPPCCRecordMO : NSManagedObject

@property (retain, nonatomic) NSString *value;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool submitted;
@property (nonatomic) long long reportVersion;

@end
