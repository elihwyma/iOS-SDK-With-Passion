/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MSPHistoryReplicaMergeOptions : NSObject

{
    NSDate *_earliestKnownSyncDate;
    long long _modificationDatePolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSDate *earliestKnownSyncDate;
@property (readonly) long long modificationDatePolicy;

- (id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2;

@end
