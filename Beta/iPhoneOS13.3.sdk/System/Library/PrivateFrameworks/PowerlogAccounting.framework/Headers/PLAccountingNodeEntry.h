/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogCore/PLEntry.h>

@class NSString;

@interface PLAccountingNodeEntry : PLEntry

@property (nonatomic, readonly) NSString *name;

+ (void)load;
+ (id)entryKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (id)initEntryWithRawData:(id)arg1;
- (id)initWithRootNodeID:(id)arg1;

@end
