/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Message/MFMailMessage.h>

@class NSArray, NSString;

@interface MFMailMessage (NSItemProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;
+ (_Bool)dragItemsAreAllMessages:(id)arg1;

- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadMessageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_attributedSubject;

@end
