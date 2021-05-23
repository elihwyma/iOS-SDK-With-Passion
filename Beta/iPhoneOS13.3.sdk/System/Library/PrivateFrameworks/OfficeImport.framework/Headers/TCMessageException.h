/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSException.h>

@class TCMessageEntry;

__attribute__((visibility("hidden")))
@interface TCMessageException : NSException

{
    TCMessageEntry *m_entry;
}

+ (void)initialize;
+ (void)raise:(id)arg1;
+ (id)exceptionWithMessage:(id)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (void)raiseUntaggedMessage:(id)arg1;
+ (id)nsError:(id)arg1 domain:(id)arg2;

- (id)description;
- (id)initWithMessage:(id)arg1;
- (id)getEntry;
- (id)initWithUntaggedMessage:(id)arg1;

@end
