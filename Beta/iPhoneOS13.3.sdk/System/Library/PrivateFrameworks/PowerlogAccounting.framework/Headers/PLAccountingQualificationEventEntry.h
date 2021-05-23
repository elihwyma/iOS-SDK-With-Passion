/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSNumber, NSSet;

@interface PLAccountingQualificationEventEntry : PLAccountingEventEntry

{
    NSSet *_childNodeIDs;
}

@property (nonatomic, readonly) NSNumber *qualificationID;
@property (nonatomic, readonly) NSSet *childNodeIDs;
@property (nonatomic, readonly) NSSet *childNodeNames;

+ (void)load;

- (id)subEntryKey;
- (int)instanceDirectionality;
- (_Bool)isEqualContentsWithEvent:(id)arg1;
- (_Bool)isEmptyEvent;
- (id)initWithQualificationID:(id)arg1 withChildNodeIDs:(id)arg2 withRange:(id)arg3;
- (id)initWithQualificationID:(id)arg1 withChildNodeNames:(id)arg2 withRange:(id)arg3;

@end
