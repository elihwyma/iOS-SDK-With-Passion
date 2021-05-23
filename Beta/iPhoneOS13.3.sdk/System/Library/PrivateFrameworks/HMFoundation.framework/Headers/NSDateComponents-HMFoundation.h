/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSDateComponents.h>

@class NSString;

@interface NSDateComponents (HMFoundation)

@property (copy, readonly) NSString *hmf_localTimeDescription;

+ (id)hmf_unarchiveFromData:(id)arg1 error:(id *)arg2;

- (id)localTimeDescription;

@end
