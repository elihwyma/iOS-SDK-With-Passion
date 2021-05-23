/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TUConversationManagerDataSource, TUConversationMediaControllerDelegate;

@interface TUConversationMediaController : NSObject

{
    id <TUConversationMediaControllerDelegate> _delegate;
    id <TUConversationManagerDataSource> _dataSource;
}

@property (nonatomic, readonly) id <TUConversationManagerDataSource> dataSource;
@property (weak, nonatomic) id <TUConversationMediaControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
- (void)mediaPrioritiesChangeForConversation:(id)arg1;
- (id)initWithConversationDataSource:(id)arg1;

@end
