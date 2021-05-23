/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MessageContentRepresentationRequestDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)contentObjectID:(id)arg1 generateHTMLSnippetsForRelatedContentItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)contentObjectID:(id)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)contentObjectID:(id)arg1 generateHTMLSnippetsForMailDropContentItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
