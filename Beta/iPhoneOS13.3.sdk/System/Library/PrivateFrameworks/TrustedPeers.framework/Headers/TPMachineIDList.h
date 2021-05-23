/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TPMachineIDList : NSObject

{
    NSArray *_entries;
}

@property (readonly) NSArray *entries;

- (id)description;
- (id)initWithEntries:(id)arg1;
- (id)entryFor:(id)arg1;
- (id)machineIDsInStatus:(unsigned long long)arg1;

@end
