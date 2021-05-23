/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@class NSUUID;

@interface WBSBrowserTabCompletionMatch

{
    NSUUID *_tabUUID;
    NSUUID *_windowUUID;
    unsigned long long _tabIndex;
}

@property (nonatomic, readonly) NSUUID *tabUUID;
@property (nonatomic, readonly) NSUUID *windowUUID;
@property (nonatomic, readonly) unsigned long long tabIndex;

- (id)parsecDomainIdentifier;
- (id)initWithTabUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 userTypedString:(id)arg4 tabURL:(id)arg5 tabTitle:(id)arg6 forQueryID:(long long)arg7;

@end
