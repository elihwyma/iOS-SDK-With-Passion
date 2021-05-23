/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString;

@interface WBSFaviconRequest : WBSSiteMetadataRequest

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) struct CGSize iconSize;
@property (nonatomic, readonly) unsigned long long fallbackType;
@property (nonatomic, readonly) _Bool isURLTypedByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize sizeForDrawing;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;

- (id)_initWithURL:(id)arg1 type:(unsigned long long)arg2 iconSize:(struct CGSize)arg3 fallbackType:(unsigned long long)arg4 isURLTypedByUser:(_Bool)arg5;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)initWithDomain:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned long long)arg3 isURLTypedByUser:(_Bool)arg4;

@end
