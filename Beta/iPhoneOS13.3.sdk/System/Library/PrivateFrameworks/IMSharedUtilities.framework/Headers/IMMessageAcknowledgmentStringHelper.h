/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMMessageAcknowledgmentStringHelper : NSObject

+ (id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2;
+ (_Bool)shouldQuoteContentString:(id)arg1;
+ (id)messageAcknowledgmentString:(long long)arg1 lowercase:(_Bool)arg2;
+ (id)longContentTypeStringForContentType:(id)arg1;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4;
+ (id)generateFormatStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4 format:(long long *)arg5;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2;
+ (id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 format:(long long *)arg3;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4 isGroupMessage:(_Bool)arg5;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 isGroupMessage:(_Bool)arg3;

@end
