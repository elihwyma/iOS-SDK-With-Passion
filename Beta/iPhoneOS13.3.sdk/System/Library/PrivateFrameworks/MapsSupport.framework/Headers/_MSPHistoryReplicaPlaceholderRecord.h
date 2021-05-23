/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPVectorTimestamp, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _MSPHistoryReplicaPlaceholderRecord : NSObject

{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSDate *_modificationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (copy, nonatomic, readonly) NSDate *modificationDate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3;

@end
