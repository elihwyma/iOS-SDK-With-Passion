/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObject.h>

#import <Email/Swift-Protocol.h>

@class EMMailDropMetadata, EMObjectID, NSArray, NSString;

@interface _EMAttachmentContentItem : EMObject <Swift>

{
    _Bool _isAvailableLocally;
    _Bool _isSinglePagePDF;
    int _exchangeEventUID;
    NSArray *_availableRepresentations;
    NSString *_contentID;
    long long _dataTransferByteCount;
    NSString *_displayName;
    CDUnknownBlockType _loaderBlock;
    long long _storageByteCount;
    NSString *_UTType;
    EMMailDropMetadata *_mailDropMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;
@property (copy, nonatomic, readonly) EMObjectID *objectID;
@property (copy, nonatomic, readonly) NSArray *availableRepresentations;
@property (nonatomic, readonly) _Bool isAvailableLocally;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *contentID;
@property (copy, nonatomic, readonly) NSString *UTType;
@property (nonatomic, readonly) long long dataTransferByteCount;
@property (nonatomic, readonly) long long storageByteCount;
@property (copy, nonatomic, readonly) EMMailDropMetadata *mailDropMetadata;
@property (nonatomic, readonly) int exchangeEventUID;
@property (copy, nonatomic) CDUnknownBlockType loaderBlock;
@property (nonatomic) _Bool isSinglePagePDF;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setMailDropMetadata:(id)arg1;
- (void)setUTType:(id)arg1;
- (void)setIsAvailableLocally:(_Bool)arg1;
- (void)setDataTransferByteCount:(long long)arg1;
- (void)setStorageByteCount:(long long)arg1;
- (void)setExchangeEventUID:(int)arg1;
- (void)setAvailableRepresentations:(id)arg1;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isSinglePagePDFWithContentURL:(id)arg1;

@end
