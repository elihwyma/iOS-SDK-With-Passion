/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSTableCell.h>

@class AssistantVoiceDownloadingView;

@interface AssistantVoiceDownloadingCell : PSTableCell

{
    AssistantVoiceDownloadingView *_downloadingView;
    _Bool _downloading;
}

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDownloading:(_Bool)arg1;

@end
