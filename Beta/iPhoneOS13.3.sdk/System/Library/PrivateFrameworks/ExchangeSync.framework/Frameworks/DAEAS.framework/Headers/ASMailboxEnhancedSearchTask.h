/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASSearchTask.h>

@class NSString;

@interface ASMailboxEnhancedSearchTask : ASSearchTask

{
    NSString *_searchId;
}

- (void)finishWithError:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)performTask;
- (id)requestBody;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (_Bool)requiresEASVersionInformaton;
- (void)_appendSearchQuery:(id)arg1;
- (void)_appendSearchOptions:(id)arg1;
- (id)replacementObjectForEmailItem:(id)arg1;

@end
