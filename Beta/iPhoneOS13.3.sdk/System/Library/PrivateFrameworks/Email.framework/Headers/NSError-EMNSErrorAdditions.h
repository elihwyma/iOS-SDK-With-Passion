/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSError.h>

@interface NSError (EMNSErrorAdditions)

@property (nonatomic, readonly) _Bool em_isItemNotFoundError;
@property (nonatomic, readonly) _Bool em_isUnknwonError;

+ (id)em_unknownError;
+ (id)em_itemNotFoundError;

@end
