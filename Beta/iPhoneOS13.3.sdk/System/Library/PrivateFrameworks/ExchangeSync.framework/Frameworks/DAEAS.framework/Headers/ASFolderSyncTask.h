/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSString;

@interface ASFolderSyncTask : ASTask

{
    NSString *_previousSyncKey;
    _Bool _requireChangedFolders;
    int _numDownloadedElements;
    long long _dataclasses;
    _Bool _isSpinning;
}

@property (nonatomic) _Bool requireChangedFolders;
@property (nonatomic) long long dataclasses;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (int)numDownloadedElements;
- (void)_setSpinning:(_Bool)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)initWithPreviousSyncKey:(id)arg1;

@end
