/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@interface _REMFetchExecutor : NSObject <Swift>

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (id)metadataFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id *)arg3;

@end
