/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class ASMailMessage, NSArray, NSMutableSet, NSSet, NSString;

@interface ASFolderItemsSyncTask : ASTask

{
    _Bool _isInitialSync;
    _Bool _isInitialBootstrapSync;
    _Bool _willUpdate;
    _Bool _moreAvailable;
    _Bool _clientWinsOnSyncConflict;
    _Bool _isResyncAfterConnectionFailed;
    _Bool _moreLocalChangesAvailable;
    _Bool _deletesAsMoves;
    _Bool _hadFalseMoreAvailable;
    _Bool _isSpinning;
    _Bool _haveShortcut121Response;
    int _bodyTruncationBytes;
    int _mimeSupport;
    int _filterDays;
    int _numReplacedItems;
    int _numDownloadedElements;
    NSString *_folderID;
    NSString *_previousSyncKey;
    long long _dataclass;
    NSArray *_actions;
    ASMailMessage *_streamingMailMessage;
    NSArray *_preservedActions;
    NSArray *_pushedActions;
    NSMutableSet *_mRejectedServerIds;
}

@property (copy, nonatomic) NSString *folderID;
@property (retain, nonatomic) NSMutableSet *mRejectedServerIds;
@property (nonatomic) _Bool deletesAsMoves;
@property (nonatomic) _Bool hadFalseMoreAvailable;
@property (nonatomic) _Bool isSpinning;
@property (nonatomic) _Bool haveShortcut121Response;
@property (nonatomic) int numReplacedItems;
@property (nonatomic) int numDownloadedElements;
@property (copy, nonatomic) NSString *previousSyncKey;
@property (nonatomic, readonly) NSString *previousSyncKeyForAgent;
@property (nonatomic) long long dataclass;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) _Bool isInitialSync;
@property (nonatomic) _Bool isInitialBootstrapSync;
@property (nonatomic) _Bool willUpdate;
@property (nonatomic) _Bool moreAvailable;
@property (nonatomic) int bodyTruncationBytes;
@property (nonatomic) _Bool clientWinsOnSyncConflict;
@property (nonatomic, setter=setMIMESupport:) int mimeSupport;
@property (nonatomic) int filterDays;
@property (retain, nonatomic) ASMailMessage *streamingMailMessage;
@property (nonatomic) _Bool isResyncAfterConnectionFailed;
@property (nonatomic, readonly) NSSet *rejectedServerIds;
@property (retain, nonatomic) NSArray *preservedActions;
@property (retain, nonatomic) NSArray *pushedActions;
@property (nonatomic) _Bool moreLocalChangesAvailable;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishWithError:(id)arg1;
- (double)percentComplete;
- (int)bodyType;
- (id)requestBody;
- (void)_setSpinning:(_Bool)arg1;
- (void)reportStatusWithError:(id)arg1;
- (id)initWithFolderID:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)replacementObjectForEmailItem:(id)arg1;
- (int)_mimeSupportCode;
- (_Bool)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;
- (id)initWithFolderID:(id)arg1 deletesAsMoves:(_Bool)arg2;
- (void)appendSupportedFieldsData:(id)arg1;
- (int)_bodyTruncationCode;
- (int)_mimeTruncationCode;
- (void)appendActionData:(id)arg1;
- (void)_handleChangedLeaf:(id)arg1 addedChanges:(id)arg2 modifiedChanges:(id)arg3 removedChanges:(id)arg4;
- (void)_handleResponseToLeaf:(id)arg1 addedResponses:(id)arg2 modifiedResponses:(id)arg3 removedResponses:(id)arg4 fetchedResponses:(id)arg5;
- (void)_addRejectedServerId:(id)arg1;
- (_Bool)checkForErrorInContext:(id)arg1;

@end
