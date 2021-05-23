/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction

{
    _Bool _read;
    _Bool _flagged;
    unsigned long long _changedFlags;
}

@property (nonatomic) _Bool read;
@property (nonatomic) _Bool flagged;
@property (nonatomic) unsigned long long changedFlags;

- (id)initWithServerID:(id)arg1 read:(_Bool)arg2 flagged:(_Bool)arg3 changedFlags:(unsigned long long)arg4;
- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;

@end
