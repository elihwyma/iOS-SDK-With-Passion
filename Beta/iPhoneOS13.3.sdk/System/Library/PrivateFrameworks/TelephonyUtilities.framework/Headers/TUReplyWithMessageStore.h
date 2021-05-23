/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TUReplyWithMessageStore : NSObject

- (id)init;
- (void)dealloc;
- (int)count;
- (id)_defaultRepliesForSending:(_Bool)arg1;
- (id)customReplies;
- (id)_cannedRepliesForSending:(_Bool)arg1;
- (id)cannedReplies;
- (id)defaultReplies;
- (id)cannedReplyActionSheetOptions;
- (id)cannedRepliesForSending;
- (void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_handleMessagesStoreChanged;

@end
