/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (CRKAdditions)

@property (readonly, getter=crk_isInPast) _Bool crk_inPast;
@property (copy, nonatomic, readonly) NSString *crk_JSONStringValue;

+ (id)crk_sharedDateFormatter;

@end
