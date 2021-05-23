/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class EMMailDropMetadata, NSArray, NSString;

@protocol EMMutableContentItem <Swift>

@property (copy, nonatomic) NSArray *availableRepresentations;
@property (nonatomic) _Bool isAvailableLocally;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *UTType;
@property (nonatomic) _Bool isSinglePagePDF;
@property (nonatomic) long long dataTransferByteCount;
@property (nonatomic) long long storageByteCount;
@property (copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property (nonatomic) int exchangeEventUID;

@end
