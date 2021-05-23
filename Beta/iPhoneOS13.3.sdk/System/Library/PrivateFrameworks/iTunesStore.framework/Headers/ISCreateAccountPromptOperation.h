/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISCreateAccountPromptOperation

{
    long long _responseType;
    NSString *_reason;
}

@property (nonatomic) long long responseType;
@property (retain, nonatomic) NSString *reason;

- (id)init;
- (void)run;
- (id)initWithReason:(id)arg1;
- (id)_newCreateAccountDialog;
- (long long)_mapCorrectSelectedButtonWithDialog:(id)arg1;
- (_Bool)_hasActiveICloudAccount;

@end
