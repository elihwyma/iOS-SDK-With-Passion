/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DataAccess/DAAction.h>

@interface ASDraftEmailAction : DAAction

{
    _Bool _send;
}

@property (nonatomic) _Bool send;

- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 send:(_Bool)arg3;
- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;

@end
