/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PXCMMComposeRecipientDataSource, PXCMMPeopleSuggestionsDataSource, PXCMMPeopleSuggestionsDataSourceManager;

@protocol PXCMMComposeRecipientDataSourceManagerDelegate;

@interface PXCMMComposeRecipientDataSourceManager : NSObject <Swift>

{
    NSMutableArray *_composeRecipients;
    NSMutableSet *_recipients;
    PXCMMPeopleSuggestionsDataSource *_peopleSuggestionsDataSource;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
    long long _sourceType;
    id <PXCMMComposeRecipientDataSourceManagerDelegate> _delegate;
    PXCMMComposeRecipientDataSource *_dataSource;
    unsigned long long _numberOfPeopleSuggested;
}

@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSource *peopleSuggestionsDataSource;
@property (retain, nonatomic) PXCMMComposeRecipientDataSource *dataSource;
@property (nonatomic) unsigned long long numberOfPeopleSuggested;
@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, readonly) long long sourceType;
@property (weak, nonatomic) id <PXCMMComposeRecipientDataSourceManagerDelegate> delegate;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)addRecipients:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithPeopleSuggestionsDataSourceManager:(id)arg1 sourceType:(long long)arg2;
- (id)_createComposeRecipientDataSourceFromCurrentState;
- (id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
- (long long)_lastValidComposeRecipientIndex;
- (void)_addComposeRecipients:(id)arg1;
- (void)_replaceComposeRecipientAtIndex:(long long)arg1 withComposeRecipient:(id)arg2;

@end
