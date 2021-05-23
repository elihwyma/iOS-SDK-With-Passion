/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNGeminiManager, CNGeminiResult, NSString;

@protocol CNUIGeminiDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNUIGeminiDataSource : NSObject

{
    CNContact *_contact;
    CNGeminiResult *_geminiResult;
    id <CNUIGeminiDataSourceDelegate> _delegate;
    CNGeminiManager *_geminiManager;
}

@property (retain, nonatomic) CNGeminiManager *geminiManager;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) NSString *channelIdentifier;
@property (weak, nonatomic) id <CNUIGeminiDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applicationWillEnterForeground:(id)arg1;
- (void)channelsDidChangeForGeminiManager:(id)arg1;
- (id)initWithGeminiManager:(id)arg1;
- (void)resetDataSource;

@end
